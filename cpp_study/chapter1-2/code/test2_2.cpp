/* 输入long返回码
version：0.1
author：李京泽 */
#include <iostream>
void longtran(int);
using namespace std;
int main()
{
    int longnum;
    cout << "请输入long值：";
    cin >> longnum;
    longtran(longnum);
    cin.get();
}

void longtran(int n)
{
    cout << n*220 << "码";
    cin.get();
}