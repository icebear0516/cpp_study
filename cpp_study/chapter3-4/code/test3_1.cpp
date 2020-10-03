/* 输入英寸转换为英尺
version：0.1
author：李京泽 */

#include <iostream>
using namespace std;
const double tran_yinzi = 0.0833333;
double cuntochi(int);
int main()
{
    double cun = 0;
    double chi = 0;
    cout << "请输入你的身高(英寸):___\b\b\b";
    cin >> cun;
    cin.get();
    chi = cuntochi(cun);
    cout << "转换后您的身高为：" << chi << "英尺";
    cin.get();
}

double cuntochi(int c)
{
    double c_chi = c * tran_yinzi;
    return c_chi;
}