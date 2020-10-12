/* 设计一个结构体能够存储披萨饼信息（名称、直径、重量）
编写一个程序要求用户输入上述信息，并能够显示这些信息
version：0.1
author：李京泽 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct pisa
    {
        /* data */
        string name;
        double radis;
        double weight;
    };

    pisa bing1;

    cout << "请输入披萨的名称：";
    getline(cin,bing1.name);

    cout << "请输入披萨的直径：";
    cin >> bing1.radis;
    cin.get();

    cout << "请输入披萨的重量;";
    cin >> bing1.weight;
    cin.get();

    cout << "披萨的名称：";
    cout << bing1.name << endl;

    cout << "披萨的直径：";
    cout << bing1.radis << endl; 

    cout << "披萨的重量：";
    cout << bing1.weight << endl;
    cin.get();    
}