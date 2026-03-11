#include<iostream>
#include<vector>
#include<algorithm>
int main(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin>>t;//1~5000
    while(t--)
    {
        int n;
        std::cin>>n;//1~50
        std::vector<int> a(2*n);
        long long sum=0;
        for(int i=0;i<2*n;++i)
        {
            std::cin>>a[i];//1~10^7
        }
        std::sort(a.begin(),a.end());
        for(int i=0;i<n;++i)
        {
            sum+=a[(2*i)];
        }
        std::cout<<sum<<"\n";
    }
    return 0;
}