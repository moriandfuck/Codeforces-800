#include<bits/stdc++.h>

int main(int argc,char const* argv[])
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n;
        std::cin>>n;
        std::vector<int> arr(n);
        int count_odd=0;
        for(int i=0;i<n;i++)
        {
            std::cin>>arr[i];
            if(arr[i]%2==1) count_odd++;
        }
        if(count_odd%2==1) std::cout<<"NO"<<std::endl;
        else std::cout<<"YES"<<std::endl;
    }
}