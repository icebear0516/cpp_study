/* 编写一个程序，让用户输入3次40米跑成绩，并显示次数和平均成绩
使用arry对象存储数据
version：0.1
author：李京泽 */

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<float,3> time;

    cout << "请输入您第一次40米成绩：";
    cin >> time[0];
    cin.get();

    cout << "请输入您第二次40米成绩：";
    cin >> time[1];
    cin.get();

    cout << "请输入您第三次40米成绩：";
    cin >> time[2];
    cin.get();

    cout << "您的跑步次数为3次";
    cout << "您的平均成绩为：" << (time[0] + time[1] + time[2]) / 3.0 << endl;        
}