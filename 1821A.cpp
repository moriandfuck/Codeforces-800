#include<iostream>
#include<string>
#define mian main

int main(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;//1~2*10^4
    while(t--)
    {
        std::string s;
        std::cin>>s;//输入模板，包括?和数字
        int len=s.size();
        int ans=1;
        if(s[0]=='?') ans*=9;
        else if(s[0]=='0') ans=0;
            
        for(int i=1;i<len;i++)
        {
            if(ans==0) break;
            if(s[i]=='?') ans*=10;
            else if(s[i]<'0' || s[i]>'9') ans=0;
        }
        std::cout<<ans<<"\n";
    }
    return 0;
}