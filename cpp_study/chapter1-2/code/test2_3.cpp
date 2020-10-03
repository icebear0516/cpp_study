/* 定义函数输出Three blind mice
定义函数输出See how they run
version:0.1
author:李京泽 */

#include <iostream>
using namespace std;
void printone(void);
void printtwo(void);
int main()
{
    printone();
    printone();
    printtwo();
    printtwo();
    cin.get();
}

void printone(void)
{
    cout << "Three blind mice" << endl;
}

void printtwo(void)
{
    cout << "See how they run" << endl;
}