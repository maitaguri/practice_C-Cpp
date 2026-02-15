/*
===========================================
日付: YYYY/MM/DD
問題: [問題名]
Status: ❌/✅
参照: [URL or 本]
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
    
    
    // 処理
    
    
    // 出力
    
    
    return 0;
}

// 【自分の回答】❌
/*
[最初のコード]
using namespace std;
int main(){
  int n,a,b;
  cin>>n>>a>>b;
  int res=0;
  for(int i=1;i<=n;++i){
    int sum=0;
    while(n>0){
      sum += n%10;
      n=n/10;
    }
    if(sum<=n){
      res += n;
    }

  }
  cout<<res<<endl;
  return 0;
}

*/

// 【間違え理由/改善点】
/*
1. res += i;にすると、iは10で割られた数。tempをうまく使ってiを残す、または関数を作る
2.forループ内でiが使われていない！
for(int i=1;i<=n;++i){
    // ここでiを使うべきなのに...
    while(n>0){        // ← n を使ってる！
        sum += n%10;   // ← n を使ってる！
        n=n/10;        // ← n を破壊してる！
    }
}
3. 条件
if(sum<=n){  // ← A以上B以下なのに、なぜnと比較？
    res += n; // ← 合計にnを足してる、iじゃない！
}問題文: "各桁の和が A以上B以下"
あなたのコード: sum<=n ← A, B が消えて
*/

// 【正解】✅

//[修正版コード]
#include <iostream>
using namespace std;
int main(){
  int n,a,b;
  cin>>n>>a>>b;
  int res=0;
  for(int i=1;i<=n;++i){
    int temp=i;
    int sum=0;
    while(temp>0){
      sum += temp%10;
      temp=temp/10;
    }
    if(sum>=a && sum<=b){
      res += i;
    }

  }
  cout<<res<<endl;
  return 0;



// 【学んだポイント】
/*
✅ forループ内には必ずi使う

✅ resでiを足したいなら初めに作業変数tempを設定する。
*/
