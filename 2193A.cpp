#include<iostream>
#include<vector>

int main(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);//加速，避免超时!!

    int t;
    std::cin>>t;
    while(t--)
    {
        int n,s,x;
        std::cin>>n>>s>>x;
        std::vector<int> a(n);
        int sum_o=0;
        for(int j=0;j<n;j++)
        {
            std::cin>>a[j];
            sum_o+=a[j];
        }//得到数组
        //std::cout<<sum_o<<std::endl;
        int dif=s-sum_o;
        if(dif>=0 && dif%x==0) std::cout<<"Yes"<<std::endl;
        else std::cout<<"No"<<std::endl;
        
    }

    return 0;
}