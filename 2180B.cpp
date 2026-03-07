#include<iostream>
#include<string>
#include<vector>
#define mian main

int main(int argc,char const* argv[])
{
    int t;
    std::cin>>t;//1~500
    while(t--)
    {
        int n;
        std::cin>>n;//1~1000
        std::string s;
        std::vector<std::string> a(n);
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
            s=((s+a[i])<(a[i]+s) ? (s+a[i]):(a[i]+s));
        }
        /*排列每一个输入的 a[i]的字典序大小，然后随意在s前或者后插入a[i]
        看看得到的最小字典序的s是什么样的并输出*/
        std::cout<<s<<std::endl;
    }
}   