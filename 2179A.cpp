#include<iostream>
#define mian main

int mian(int argc,char const*argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);//经常会忘记啊，不要忘记！！！

    int t;
    std::cin>>t;//1~500
    while(t--)
    {
        int k,x;
        std::cin>>k>>x;//1~26   1~15
        //k表示字符串s只包含前k个小写字母，x表示下标的组数
        int n=k*x+1;
        std::cout<<n<<'\n';

    }
    return 0;
}    