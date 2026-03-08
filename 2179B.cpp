#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#define mian main

int mian(int argc,char const*argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);//经常会忘记啊，不要忘记！！！

    int t;
    std::cin>>t;//1~10^4
    while(t--)
    {
        int n;
        std::cin>>n;//3~2*10^5
        std::vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];//1~100
        }//输入一组数
        long long original_sum=0;
        for(int i=0;i<n-1;i++)
        {
            original_sum+=abs(a[i]-a[i+1]);
        }
        long long differ_time=(long long)abs(a[0]-a[1]);//如果删除第一个数
        differ_time= std::max(differ_time,(long long)abs(a[n-1]-a[n-2]));//如果删除最后一个数
        //删除中间数的话...
        for(int k=1;k<n-1;k++)
        {
            /*收益差公式：
            abs(a[i]-a[i+1])+abs(a[i]-a[i-1])-abs(a[i-1]-a[i+1])
            ====减少的时间越多越好
            */
            long long temp=abs(a[k]-a[k+1])+abs(a[k]-a[k-1])-abs(a[k-1]-a[k+1]);
            differ_time=std::max(differ_time,temp);

        }
        std::cout<<original_sum - differ_time<<'\n';
        

    }
    return 0;
}
