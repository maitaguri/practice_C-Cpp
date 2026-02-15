#!/usr/bin/env python3
import os, re

def update_progress():
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
    
    print(header + "\n" + "\n".join(rows))

if __name__ == "__main__":
    update_progress()
