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
        int n,k;
        std::cin>>n>>k;//n:1~50 k:1~10^7
        std::vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
        }
        std::sort(a.begin(),a.end());//升序，越后面越大，从最后一个开始拿
        int monocarp=0;
        for(int j=n-1;j>=0;j--)
        {
            if((monocarp+a[j])<=k) monocarp+=a[j];
            else break;
        }
        std::cout<<k-monocarp<<std::endl;

    }
}