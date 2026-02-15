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
  cin<<n;
  int count=0;
  while(n){
    for(int i=0;i<3;i++){
      
      if((x>>i)&1)==true){
        ++count;
      }
      n^^//2ビットずらして消したい
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

//解法2
/*

    // '1'の個数をカウント（文字'1'が何個あるか）
    int count = 0;
    for (char c : s) {
        if (c == '1') {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}

*/

//解法3
/*
#include<iostream>
#include<string>
#include<numeric>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << accumulate(s.begin(), s.end(), 0) - 3 * '0' << endl;
      // sの最初から最後までの合計(?)から、 3*'0' を引くと '1' の個数が出てくる...!?
}
*/

//解法4

/*
3 桁の数字を 9 で割ったあまりが求める数と等しいことになります。ただし、9桁以上の時に不適切
*/
/*
#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << a % 9 << endl;
}*/


// 【学んだポイント】
/*
✅ 10進数 → n%10, n/=10 で桁処理
✅ 2進数 → (n>>i)&1 でビット処理
✅ 用途に応じて使い分ける
*/
