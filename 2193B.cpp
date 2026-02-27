#include <iostream>
#include <vector>
#include <algorithm>  // reverse

int main(int argc,char const*argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);  // 加速,避免超时！！！

    int t;//测试组数,(1~10^4)
    std::cin>>t;
    while(t--)
    {
        int n;//排列位数
        std::cin>>n;
        std::vector<int> p(n);
        
        for(int j=0;j<=n-1;j++)
        {
            std::cin>>p[j]; 
        }//输入数列
        int l=0,r=0;
        int count=0; 
        for(int i=0;i<n && p[i]==n-count;i++)
        {
            count++;
        }
        l=count;//l找到
        if (l == n) 
        {
            for(int z=0;z<=n-1;z++)
            {
                std::cout<<p[z]<<" ";
            }
            std::cout<<std::endl;
            
        }
        else
        {
            int temp=p[l+1],temp_h=l+1;
            for(int h=1;l+h<=n-1;h++)
            {
                if(temp<=p[l+h]) 
                {
                    temp=p[l+h];
                    temp_h=l+h;
                }
                
            }
            r=temp_h;//r找到
            //std::cout<<l<<r<<" "<<std::endl;
            reverse(p.begin() + l, p.begin() + r + 1);
            for(int z=0;z<=n-1;z++)
            {
                std::cout<<p[z]<<" ";
            }
            std::cout <<std::endl;
    
        }
    }
    return 0;
}

