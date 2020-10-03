/* 输入年龄，显示年龄有多少个月
version:0.1
author：李京泽 */

#include <iostream>
using namespace std;
void calcumonth (int);

int main()
{
    int year;
    cout << "请输入您的年龄：";
    cin >> year;
    cin.get();
    calcumonth(year);
}

void calcumonth (int n)
{
    cout << "您的年龄包含：" << n * 12 << " 个月份";
    cin.get();
}