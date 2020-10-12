/* 根据第6题，使用new来动态分配数组
version：0.1
author：李京泽 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct Candybar
    {
        /* data */
        string name;
        double weight;
        int kll;
    };                                                                                                                                                                                                                                                                                                                                                      
    
    Candybar * cd = new Candybar[3];

    *cd = {"Mocha Munch1" , 2.3 ,350};
    *(cd + 1) = {"Mocha Munch2" , 2.5 ,550};
    *(cd + 2) = {"Mocha Munch3" , 2.8 ,850};

    cout << cd->name << endl << cd->weight << endl << cd->kll << endl;
    cout << (cd + 1)->name << endl << (cd + 1)->weight << endl << (cd + 1)->kll << endl;
    cout << (cd + 2)->name << endl << (cd + 2)->weight << endl << (cd + 2)->kll << endl;



}