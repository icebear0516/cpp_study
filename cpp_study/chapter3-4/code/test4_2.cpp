/* 将4.4程序中的char转换完string
version：0.1
author：李京泽 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string dessert;

    cout << "Enter your name:\n";
    getline(cin,name);

    cout << "Enter your favorite dessert:\n";
    getline(cin,dessert);

    cout << "I have some delicious " << dessert;
    cout << " for you ," << name << ".\n";
    cin.get();
    return 0;

}