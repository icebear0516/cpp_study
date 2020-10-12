/* 结构candybar包含3个成员，第一个成员储存了糖块的品牌
第二个成员存储糖块的重量（可以有小数）
第三个成员存储了糖块的卡路里含量（整数）
声明一个candybar，并初始化为"Mocha Munch"、2.3、350
初始化在声明时进行，随后显示
version：0.1
author：李京泽 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct candybar
    {
        string name;
        double weight;
        int kll;
    };
    
    struct candybar snack {"Mocha Munch" , 2.3 ,350};

    cout << snack.name <<endl << snack.weight <<endl << snack.kll;
    cin.get();
    
}