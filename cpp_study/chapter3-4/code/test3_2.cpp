/* 用户输入英寸与英尺和体重，并显示他的身高与BMI体重指数
version：0.1
author：李京泽 */

#include <iostream>
#include <cmath>
using namespace std;
const double mitrans_yinzi = 0.0254;
const int chitrans_yinzi = 12;
const double weight_yinzi = 2.2;
double culbmi(double,double);
int main()
{
    int cun = 0,chi = 0,zhong = 0;
    double mi = 0,weight = 0,bmi = 0;
    cout << "请输入您的身高(英尺):___\b\b\b";
    cin >> chi;
    cin.get();
    cout << "请输入您的身高(英寸):___\b\b\b";
    cin >> cun;
    cin.get();
    cout << "请输入您的体重(英镑):___\b\b\b";
    cin >> weight;
    cin.get();
    mi = (chi * chitrans_yinzi + cun) * mitrans_yinzi;
    weight = weight * weight_yinzi;
    bmi = culbmi(mi,weight);
    cout << "您的身高为:" << chi << "英尺" << cun << "英寸" << endl;
    cout << "您的BMI系数为:" << bmi;

}

double culbmi(double m,double w)
{
    double x = w / m;
    double b = pow(x,2);
    return b;
}