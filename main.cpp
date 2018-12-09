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
    cout << "HelloWorld." << endl;
    return 0;
}
