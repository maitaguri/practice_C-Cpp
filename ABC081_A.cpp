/*
===========================================
日付: 2026/02/15
問題: ビット操作 - 1の個数カウント
Status: ❌ Wrong → ✅ Solved
参照: https://atcoder.jp/contests/abc081/tasks/abc081_a
===========================================
*/

// 【自分の最初の回答】❌
/*
#include <iostream>
using namespace std;

int main(){
  int n;
  cin<<n;  // ❌ cin >> n;
  int count=0;
  while(n){
    for(int i=0;i<3;i++){
      if((x>>i)&1)==true){  // ❌ xが未定義、nを使うべき
        ++count;
      }
      n^^//2ビットずらして消したい  // ❌ 構文エラー
    }
  }
}
*/

// 【間違え理由】
/*
1. ビット計算で桁をずらそうとしたが、10進数なのでn%10で十分
2. 変数名の混乱 (n vs x)
3. 構文エラー (cin<<, n^^)
4. ループ構造の理解不足
*/

// 【正解 - 解法1: 10進数の各桁チェック】✅
#include <iostream>
using namespace std;

int main(){
  int x;
  cin >> x;  // 101 (10進数)
  int count = 0;
  
  // 10進数の各桁をチェック
  for(int i = 0; i < 3; i++){
    if((x % 10) == 1){  // 最下位桁が1か
      ++count;
    }
    x /= 10;  // 1桁削る
  }
  
  cout << count << endl;
  return 0;
}

// 【学んだポイント】
/*
✅ 10進数 → n%10, n/=10 で桁処理
✅ 2進数 → (n>>i)&1 でビット処理
✅ 用途に応じて使い分ける
*/
