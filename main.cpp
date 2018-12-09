/**
 * ヘッダ
 * C言語とは違って.hつけなくてもよい
 */
#include <iostream>
#include "sample.h" 

/**
 * 標準名前空間
 * coutをprintf的なやつ
 * 末尾にstdをつけることによりstd::coutとかしてしなくてもcoutだけでよびだせるよ
 */
using namespace std;

int main()
{
    CSample obj;  // CSampleをインスタンス化
    int num;
     
    cout << "整数を入力して下さい:" << endl;
    cin >> num;
     
    obj.set( num );  // CSampleのメンバ変数をセット
    cout << obj.get() << endl;  // メンバ変数の値を出力
 
    return 0;
} 
