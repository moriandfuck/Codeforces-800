#include<iostream>
#include<algorithm>

int main(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;//1~1000
    while(t--)
    {
        int n;
        std::cin>>n;//n is even,2~1000
        int num;
        if(n%4==0) 
        {
            num=n/4;
            std::cout<<num<<'\n';
        }
        else
        {
            num=n/4+1;
            std::cout<<num<<'\n';
        }
    }
    return 0;
}