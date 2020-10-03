/* 输入小时、分钟数据以显示时钟格式
version：0.1
author：李京泽 */

#include <iostream>
using namespace std;
void clock_print(int,int);

int main()
{
    int hour,minit;
    cout << "请输入小时数据：";
    cin >> hour;
    cin.get();
    cout << "请输入分钟数据：";
    cin >> minit;
    cin.get();
    clock_print(hour,minit);
}

void clock_print(int h ,int m)
{
    cout << "时间为：" << h << " : " << m;
    cin.get();
}

