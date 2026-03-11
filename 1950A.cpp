#include<iostream>
#include<vector>
#include<algorithm>
int main(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin>>t;//1~1000
    while(t--)
    {
        std::vector<int> a(3);
        for(int i=0;i<3;++i)
        {
            std::cin>>a[i];//1~100
        }
        //peak or stair or neither
        if(a[0]<a[1] && a[1]<a[2]) std::cout<<"STAIR\n";
        else if(a[0]<a[1] && a[1]>a[2]) std::cout<<"PEAK\n";
        else std::cout<<"NONE\n";
    }
    return 0;
}