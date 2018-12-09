/**
 * ヘッダ
 * C言語とは違って.hつけなくてもよい
 */
#include <iostream>

/**
 * 標準名前空間
 * coutをprintf的なやつ
 * 末尾にstdをつけることによりstd::coutとかしてしなくてもcoutだけでよびだせるよ
 */
using namespace std;
 
int main(){
    int a;
    cout << "plaese input number" << endl;
    cin >> a;
    cout << "a=" << a << endl;
    return 0;
}
