/* 将光年转换为天文单位
version：0.1
author：李京泽 */

#include <iostream>
using namespace std;
double astrontrans(double);

int main()
{
    double gn_num;
    cout << "请输入光年数:";
    cin >> gn_num;
    cin.get();
    cout << gn_num <<" 光年 = " << astrontrans(gn_num) << "天文单位";
    cin.get();
}

double astrontrans(double gn)
{
    return gn * 63240;
}