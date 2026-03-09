#include<iostream>
#include<string>
#define mian main

int main(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin>>t;//1~26
    while(t--)
    {
        std::string s;
        std::cin>>s;
        bool has_c =(s.find("c") !=std::string::npos);
        bool has_o =(s.find("o") !=std::string::npos);
        bool has_d =(s.find("d") !=std::string::npos);
        bool has_e =(s.find("e") !=std::string::npos);
        bool has_f =(s.find("f") !=std::string::npos);
        bool has_r =(s.find("r") !=std::string::npos);
        bool has_s =(s.find("s") !=std::string::npos);
        if(has_c || has_d || has_o || has_e || has_f || has_r || has_s)
            std::cout<<"Yes"<<"\n";
        else
            std::cout<<"No"<<"\n";
    }
    
}