/* 输入度分秒，并以度来显示最终的纬度
version：0.1
author：李京泽 */
#include <iostream>
using namespace std;
const int dutrans = 60; // 一度为60分
const int fentrans = 3600; //一度为3600秒
void printweidu(int,double,double);
int main()
{
    int du;
    double fen,miao;
    cout << "请输入纬度" <<endl;
    cout << "输入度：";
    cin >> du;
    cin.get();
    cout << "请输入分：";
    cin >> fen;
    cin.get();
    cout << "请输入秒：";
    cin >> miao;
    cin.get();
    printweidu(du,fen,miao);
}
void printweidu(int d,double f,double m)
{
    double w = d + f/dutrans + m/dutrans/fentrans;//计算输出纬度
    cout << "您输入的纬度为：" << w << "度" << endl;
    cin.get();
}