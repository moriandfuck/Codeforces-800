#include<iostream>
#include<cstdlib>
#include<ctime>
#define mian main
//真就是随便给出给定要求数量个int值啊！这是签到题难度吧？？？
int main(int argc,char const*argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;//1~20
    std::cin>>t;
    while(t--)
    {
        int n;//1~20
        std::cin>>n;//要给出n个完全平方根，大小随机？？？什么鬼
        srand(static_cast<unsigned int>(time(nullptr)));
        while(n--)
        {
            std::cout<<rand()<<std::endl;
        }

    }
    return 0;
}