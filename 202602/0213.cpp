//ABC081A - Placing Marbles
//1の数を数える
//回答1-ビット長
#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int count=0;
  for(int i=0;i<3;i++){
    if((n>>i)&1){//ビット長用いる
      count ++;
    }
  }
  cout<<count<<endl;
  return 0;
}

//回答2-一つずつ調べる
#include <iostream>
using namespace std;

int main(){
  string n(3);
  cin>>n;
  int count=0;
  for(int i=0;i<3;i++){
    if(n[i]==1){
      count ++;
    }
  }
  cout<<count<<endl;
  return 0;
}
//回答3-accumulator、ASCIIコード的な考え

#include<iostream>
#include<string>
#include<numeric>//数値のシーケンスや数値の処理に特化したアルゴリズムを定義
//たとえば内積、部分和など　https://cpprefjp.github.io/reference/numeric.html

using namespace std;

int main() {
    string s;
    cin >> s;
    cout << accumulate(s.begin(), s.end(), 0) - 3 * '0' << endl;
      // sの最初から最後までの合計から、 3*'0' を引くと '1' の個数が出てくる...!?
}
//文字の合計をとったり、- 3 * '0' がかなり不思議なおまじないに見えて、なぜこれで正しい答えが出てくるのかわからないかもしれません。
//これは、文字一文字を現す char 型の変数に秘密があります。

//実は char 型は整数型の一つで、多くの場合 ASCII コードという整数と文字の対応規則に沿って文字への変換が行われています。

//そのため、整数でできる四則演算などは当然 char 型でも行うことができます。
//さらに、ASCIIコードはわかりやすく作られていて、例えば '7'-'3'=7-3 などが成り立つように、'0', '1', ...,'9' が連続する整数に対応しています。
//なので、数字一文字が入っている char 型の変数が、なんの数字を表しているかを知りたいとき、c - '0' とすると求めたい値が手に入るなど、いろいろ便利なことができます。

//今回のコードでは、'1' = '0' + 1 が成り立つことから、合計と 3 * '0' の差が '1' の数を表すようになっています。


//回答4 -9進法
#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << a % 9 << endl;
}
