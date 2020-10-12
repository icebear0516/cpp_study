/* 要求用户输入其名，在输入姓
程序使用，和空格来将姓名组合起来
使用string对象与string头文件中的函数
version：0.1
author：李京泽 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first_name;
    string last_name;

    cout << "please input your first name:";
    getline(cin,first_name);

    cout << "please input your last_name:";
    getline(cin,last_name);

    cout << first_name + ", " + last_name;
    cin.get();

}