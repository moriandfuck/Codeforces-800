#include<iostream>
#include<vector>
#include<algorithm>
int main(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;//1`100
    while(t--)
    {
        int n,k;
        std::cin>>n>>k;//1~100
        //n箱子个数，k最多替换子序列的长度
        std::vector<int> a(n);
        //最终能否通过操作得到非递减的数列？ yes no
        for(int i=0;i<n;++i)
        {
            std::cin>>a[i];
        }//输入数列
        bool subseq=false;
        for(int i=0;i<n-1;++i)
        {
            if(a[i]>a[i+1])
            {
                subseq=true;
                break;
            }
        }
        if(!subseq)
        {
            std::cout<<"YES\n";
            continue;
        }
        else
        {
             std::cout << (k >= 2 ? "YES\n" : "NO\n");
        }
        

    }
    return 0;
}