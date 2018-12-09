/**
 * ヘッダ
 * C言語とは違って.hつけなくてもよい
 */
#include <iostream>
#include "Sample.h" 

/**
 * 標準名前空間
 * coutをprintf的なやつ
 * 末尾にstdをつけることによりstd::coutとかしてしなくてもcoutだけでよびだせるよ
 */
using namespace std;

int main()
{
    Sample s;
    s.a = 1;
    s.func1();
 
    return 0;
} 
