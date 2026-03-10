#include<iostream>
#include<string>
#include<vector>
#include<cmath>
int main(int argc, char* argv[]) 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin>>t;//1~10^4
    while(t--)
    {
        std::string pin;
        std::cin>>pin;//4 digits
        std::vector<int> s(4);
        for(int i=0;i<4;i++)
        {
            if(pin[i]!='0') s[i]=pin[i]-'0';
            else s[i]=10;
        }
        
        int count=0;
        for(int i=0;i<4;i++)
        {
            if(i==0) count+=abs(s[i]-1);
            else count+=abs(s[i]-s[i-1]);
        }
        std::cout<<count+4<<std::endl;

    }
    return 0;
}