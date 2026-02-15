# AtCoder 学習記録

## 🎯 Repository Structure

```
practice_C-Cpp/
└── AtCoder/
    ├── template.cpp           # 問題テンプレート
    ├── update_progress.py     # 進捗管理スクリプト
    ├── .gitignore            # Git除外設定
    ├── ABC081_A.cpp          # 解答済み問題
    ├── ABC083_B.cpp          # 解答済み問題
    └── ABC300_A.cpp          # 解答済み問題
```

## 📝 使い方

### 新しい問題を始める
1. `AtCoder/template.cpp` をコピーして、問題に応じた名前に変更
   - 例：`AtCoder/ABC300_A.cpp`
2. ヘッダー部分に日付、問題名、参照URLを記入
3. コードを書いて提出

### 答え合わせ
1. ❌の場合：「自分の回答」セクションに最初のコードを保存
2. 間違え理由を分析して記入
3. 正解コードを書く
4. 学んだポイントをまとめる

## 🏆 進捗

| コンテスト | A | B | C | D | E | F |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| ABC300 | ✅ | - | - | - | - | - |
| ABC083 | - | ✅ | - | - | - | - |
| ABC081 | ✅ | - | - | - | - | - |

凡例：✅ AC / ❌ WA / 🔄 復習中 / - 未着手

### 進捗の更新方法

```bash
cd AtCoder
python3 update_progress.py  # README.mdが自動更新される
```

## ⚙️ コンパイル・実行

```bash
# コンパイル
g++ -std=c++17 -O2 -Wall AtCoder/ABC300_A.cpp -o ABC300_A.out

# 実行
./ABC300_A.out
```

## 📚 学習メモ

### よく使うテクニック
- 

### ハマったポイント
- 

## 🔄 Gitワークフロー

```bash
# 新しい問題を解いた後
cd /Users/maitaguri/Documents/AtCoder/AtCoder
python3 update_progress.py

cd ..
git add .
git commit -m "ABC〇〇〇 〇: 問題名 ✅"
git push origin main
```
