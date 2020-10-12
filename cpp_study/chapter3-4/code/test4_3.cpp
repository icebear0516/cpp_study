/* 要求用户输入其名，在输入姓
程序使用，和空格来将姓名组合起来
使用char数组与cstring头文件中的函数
version：0.1
author：李京泽 */

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char first_name[64];
    char last_name[64];

    cout << "please input your first name:";
    cin.getline(first_name,64);

    cout << "please input your last_name:";
    cin.getline(last_name,64);

    strcat_s(first_name,", ");
    strcat_s(first_name,last_name);

    cout << first_name;    
    cin.get();

}