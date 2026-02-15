#!/usr/bin/env python3
import os, re

def update_progress():
    """進捗表を生成してREADME.mdを更新する"""
    files = [f for f in os.listdir('.') if re.match(r'ABC\d{3}_[A-F]\.cpp', f)]
    data = {}
    for f in files:
        num, prob = re.search(r'ABC(\d{3})_([A-F])', f).groups()
        data.setdefault(num, {})[prob] = "✅"

    header = "| コンテスト | A | B | C | D | E | F |\n| :--- | :---: | :---: | :---: | :---: | :---: | :---: |"
    rows = []
    for num in sorted(data.keys(), reverse=True):
        row = [data[num].get(p, "-") for p in "ABCDEF"]
        rows.append(f"| ABC{num} | " + " | ".join(row) + " |")
    
    progress_table = header + "\n" + "\n".join(rows)
    
    # ルートのREADME.mdを読み込む（1つ上のディレクトリ）
    readme_path = "../README.md"
    if not os.path.exists(readme_path):
        print("ERROR: README.mdが見つかりません")
        return
    
    with open(readme_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # 進捗セクションを更新
    # "## 🏆 進捗" から次の "凡例：" までの間を置き換える
    pattern = r'(## 🏆 進捗\s*\n\n)(.*?)(\n\n凡例：)'
    replacement = r'\1' + progress_table + r'\3'
    
    new_content = re.sub(pattern, replacement, content, flags=re.DOTALL)
    
    # README.mdに書き込む
    with open(readme_path, 'w', encoding='utf-8') as f:
        f.write(new_content)
    
    print("✅ README.mdを更新しました！\n")
    print(progress_table)

if __name__ == "__main__":
    update_progress()
