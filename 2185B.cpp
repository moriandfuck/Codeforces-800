#include<iostream>
#include<vector>
#define mian main
int mian(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin>>t;//1~100
    while(t--)
    {
        int n;
        std::cin>>n;//2~50
        std::vector<int> a(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];//读取数组
        }
        //最大数是否在第一项？否，找到最大数，输出n*最大数
        //是，输出n*第一项
        int judge=a[0];
        for(int j=1;j<n;j++)
        {
            if(judge<=a[j]) 
            {
                judge=a[j];
            }
        }
        std::cout<<n*(judge<=a[0] ? a[0]:judge)<<std::endl;
    }
    return 0;
}

