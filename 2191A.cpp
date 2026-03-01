#include <iostream>
#include <vector>

int main(int argc,char const*argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);  // 加速,避免超时！！！

    int t;//测试组数,(1~10^4)
    std::cin>>t;
    while(t--)
    {
        int n;//数据个数
        std::cin>>n;
        std::vector<int> p(n);
        
        for(int j=0;j<=n-1;j++)
        {
            std::cin>>p[j]; 
        }//输入数列
        bool ok=true;
        //检验输入的数列是否奇偶相间
        int last=p[0]%2;
        for(int i=1;i<=n-1;i++)
        {
            
            int now=p[i]%2;
            if(now==last)
            {
                ok=false;
                break;
            }
            last=now;
            

        }
        if(ok) std::cout<<"Yes"<<std::endl;
        else std::cout<<"No"<<std::endl;
    }
    return 0;
}