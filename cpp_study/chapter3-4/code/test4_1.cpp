/* 输出4.1示例的类型
version：0.1
author：李京泽 */

#include <iostream>
using namespace std;

int main()
{
    char first_name[60],last_name[60];
    int age;
    char grade;

    cout << "what is your first name? ";
    cin.getline(first_name,60);

    cout << "what is your last name? ";
    cin.getline(last_name,60);

    cout << "what letter grade do you deserve? ";
    cin >> grade;
    cin.get();

    cout << "what is your age? ";
    cin >> age;
    cin.get();

    
    cout << "Name: " << last_name << " , " << first_name << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age << endl;
    cin.get();

} 
