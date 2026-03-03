#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
int main(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    {
        int n;//2~100
        std::cin>>n;
        std::vector<int> p(n,0);
        p[0]=n;
        for(int i=0;i<n-1;i++)
        {
            p[i+1]=p[i]-pow(-1,i)*(n-i-1);
        }
        reverse(p.begin(), p.end());
        for(int j=0;j<n;j++)
        {
            std::cout<<p[j]<<" ";
        }
        std::cout<<std::endl;
    }
}