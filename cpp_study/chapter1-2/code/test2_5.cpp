/* 摄氏度转换为华氏度
version:0.1
author：李京泽 */

#include <iostream>
using namespace std;
void temtrans(double);

int main()
{
    double temp;
    temtrans(temp);
}

void temtrans(double t)
{
    cout << "请输入摄氏度：";
    cin >> t;
    cin.get();
    cout << t << " 摄氏度为 " << t * 1.8 + 32.0 << " 华氏度";
    cin.get();
}