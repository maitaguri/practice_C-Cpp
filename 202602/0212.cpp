// ABC081B - Shift only
//0212
#include <iostream>
using namespace std;

int N;
int A[210];        

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> A[i];

    int res = 0;

    while (true) {
        bool exist_odd = false;  // A[i] がすべて偶数かどうかを判定するフラグ
        for (int i = 0; i < N; ++i) {
            if (A[i] % 2 != 0) exist_odd = true;  // 奇数があったらフラグを立てる
        }

        if (exist_odd) break;  // 奇数があったら break
        for (int i = 0; i < N; ++i) {
            A[i] /= 2;
        }
        ++res;
    }

    cout << res << endl;
}
