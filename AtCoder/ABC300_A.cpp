/*
===========================================
日付: 2026/02/15
問題: ABC300 A - N-choice question
Status: ✅
参照: https://atcoder.jp/contests/abc300/tasks/abc300_a
===========================================
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    // 入力処理
    int N, A, B;
    cin >> N >> A >> B;
    
    vector<int> C(N);
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }
    
    // 処理
    int answer = A + B;
    for (int i = 0; i < N; i++) {
        if (C[i] == answer) {
            cout << i + 1 << endl;
            break;
        }
    }
    
    return 0;
}

// 【自分の回答】✅
/*
上記と同じ（一発AC）
*/

// 【間違え理由/改善点】
/*
なし
*/

// 【正解】✅
/*
上記のコード
*/

// 【学んだポイント】
/*
✅ 簡単な探索問題
✅ 1-indexedの出力に注意
*/
