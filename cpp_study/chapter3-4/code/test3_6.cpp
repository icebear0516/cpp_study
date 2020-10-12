/* 编写一个程序，要求用户输入驱车里程（公里）和使用汽油量（升）
然后指出汽车百公里油耗（升）
version：0.1
author：李京泽 */

#include <iostream>
using namespace std;

int main()
{
    int distance = 0;
    int oiluse = 0;

    cout << "请输入您的行驶里程（公里）：";
    cin >> distance;
    cin.get();

    cout << "请输入您的耗油量（升）：";
    cin >> oiluse;
    cin.get();

    cout << "您的百公里油耗为：" << double(oiluse) / distance * 100 << " 升 " << endl;
    system("pause");
}