/* 编写程序要求用户输入全球当前的人口与美国的人口
将这些信息存储在long long变量中，并让程序显示
美国的人口占全球人口的百分比
version：0.1
author：李京泽 */
#include <iostream>
using namespace std;

int main()
{
    long long m_people = 0;
    long long all_people = 0;
    double rate = 0;
    cout << "请输入美国的人口数：";
    cin >> m_people;
    cin.get();

    cout << "请输入全球人口数：";
    cin >> all_people;
    cin.get();

    rate = double (m_people) / all_people * 100;
    cout << "美国占全球人口的：" << rate << " % " << endl;
    system("pause");


}