/* 结构Candybar如第五题相同，编写一个程序
创建一个包含三个元素的candybar数组
并初始化，然后显示每个结构的内容 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct candybar
    {
        /* data */
        string name;
        double weight;
        int kll;
    };

    candybar snack[3] =
    {
        {"Mocha Munch1" , 2.3 ,350},
        {"Mocha Munch2" , 2.5 ,550},
        {"Mocha Munch3" , 2.8 ,850}
    };

    cout << snack[0].name <<endl << snack[0].weight <<endl << snack[0].kll;
    cout << snack[1].name <<endl << snack[1].weight <<endl << snack[1].kll;  
    cout << snack[2].name <<endl << snack[2].weight <<endl << snack[3].kll;     

    
}