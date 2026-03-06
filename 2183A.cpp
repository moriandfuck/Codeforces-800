#include<iostream>
#include<vector>
#define mian main

int main(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin>>t;//1~100
    while(t--)
    {
        int n;
        std::cin>>n;//3~100
        std::vector<int> a(n);
        for(int l=0;l<n;l++)
        {
            std::cin>>a[l];
        }

        //操作：A先动，轮流
        //选的区间里面有0就把整体替代为1
        //选的区间里面只有1就把整体替代成0
        //A_win:0 B_win:1
        //选的区间至少包含两个数
        
        //考虑首尾，因为到最后至少会有a1或an存在，或者两个都。
        if(a[0]==1 || a[n-1]==1) std::cout<<"Alice"<<std::endl;
        else std::cout<<"Bob"<<std::endl; 



    }
    return 0;
}