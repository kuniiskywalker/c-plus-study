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
    string s, t;
    t = "Input string is";
    cout << "Please input string: ";
    cin >> t;
    cout << t+s << "." << endl;
    return 0;
}
