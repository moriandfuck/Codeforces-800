#include<iostream>
#include<algorithm>

int main(int argc, char  const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin>>t;//1~100
    while(t--)
    {
        int x,y;
        std::cin>>x>>y;//0~9
        std::cout<<std::min(x,y)<<' '<<std::max(x,y)<<'\n';

    }
}