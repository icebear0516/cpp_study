/* 编写一个程序，要求输入一个汽车的百公里油耗
然后将其转换为每加仑多少英里
version：0.1
author：李京泽 */
 
#include <iostream>
using namespace std;
const float mileToUkMile = 0.6214;
const float shengToJialun = 0.2642;

int main()
{
    float rate = 0;

    cout << "请输入您的汽车百公里油耗(升)：";
    cin >> rate;
    cin.get();

    cout << "您汽车的美式耗油量为：" << (100 * mileToUkMile ) / (rate * shengToJialun) << " mpg " << endl;
    cin.get();

}