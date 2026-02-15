//C++
//ABC086A-Product
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    //解法1:普通に掛け算
    //if((a*b)%2==0) {cout<<"Even"<<endl;}
    //else {cout<<"Odd"<<endl;}

    //解法2:どちらかが奇数(2で割ったあまりが1)
    if((a%2==1)|(b%2==1)=true){cout<<"Even"<<endl;}

    //解法3:ビット演算
    //Aが奇数であることは(A&1)==1で表すことができる
    //a&b&1 = 0 or 1 3+5+1=1(Even), 2+4+1=1(Even), 3+4+1=0(Odd))
    //(条件)?(条件がTrueの時の値):(条件がfalseの時の値)
    cout<<(a&b&1 ? "Odd":"Even")<<endl;
    


        
}
