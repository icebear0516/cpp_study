/* 设计一个结构体能够存储披萨饼信息（名称、直径、重量）
编写一个程序要求用户输入上述信息，并能够显示这些信息
要求使用new来分配内存
version：0.1
author：李京泽 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct Pisa
    {
        /* data */
        string name;
        double radis;
        double weight;
    };

    Pisa * ps = new Pisa;

    cout << "请输入披萨的直径：";
    cin >> ps->radis;
    cin.get();

    cout << "请输入披萨的名称：";
    getline(cin,ps->name);

    cout << "请输入披萨的重量;";
    cin >> ps->weight;
    cin.get();



    cout << "披萨的名称：";
    cout << ps->name << endl;

    cout << "披萨的直径：";
    cout << ps->radis << endl; 

    cout << "披萨的重量：";
    cout << ps->weight << endl;
    delete ps;

    cin.get();    
}