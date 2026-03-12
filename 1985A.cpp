#include<iostream>
#include<algorithm>
#include<string>

int main(int argc,char const* argv[])
{
    int t;
    std::cin>>t;//1~100
    while(t--)
    {
        std::string a,b;
        std::cin>>a>>b;
        char temp_contaner=0;
        if(a[0]!=b[0])
        {
            std::swap(a[0],b[0]);
        }
        std::cout<<a<<" "<<b<<std::endl;
        
        
    }
    return 0;
}