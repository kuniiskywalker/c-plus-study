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
    CSample obj1, obj2;  // CSampleのインスタンスを複数生成

    obj1.set( 1 );    
    obj2.set( 2 );    
 
    cout << obj1.get() << endl;
    cout << obj2.get() << endl;
 
    return 0;
} 
