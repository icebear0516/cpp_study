/* 要求用户以整数的方式输入秒数（long变量存储）
以天、小时、分和秒的方式显示这段时间
符号常量来表示每天有多少小时、分钟、秒钟
version：0.1
author：李京泽 */

#include <iostream>
using namespace std;
const int shitrans = 24;//一天24小时
const int fentrans = 60;//一小时60分钟
const int miaotrans = 60;//一分钟60秒

void returntime(long);

int main()
{
    int sec;
    cout << "请输入秒：";
    cin >> sec;
    cin.get();
    returntime(sec);
}
void returntime(long m)
{
    int t,x,f,rm;
    t = m / (shitrans * fentrans * miaotrans);
    x = (m - (t * shitrans * fentrans * miaotrans)) / (fentrans * miaotrans) ;
    f = (m - (t * shitrans * fentrans * miaotrans) - (x * fentrans * miaotrans)) / miaotrans;
    rm = m - (t * shitrans * fentrans * miaotrans) - (x * fentrans * miaotrans) - (f * miaotrans);
    cout << m << "秒 = " << t << "天，" << x << "时，" << f << "分，" << m << "秒。";
    cin.get();
}