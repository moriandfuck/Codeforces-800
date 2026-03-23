#include<iostream>
#include<vector>

int main(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    {
        int n;std::cin>>n;
        std::vector<std::vector<int>> M(n,std::vector<int>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                std::cin>>M[i][j];
            }
        }
        std::vector<unsigned int> ans(n);

        //这个我自己想的话就是没思路
        //很恶心的按位或题,第一次接触
        //#1,推导数组a
        std::vector<unsigned int> a(n, (1U << 30) - 1); // 初始化为全1（30位）
        for (int i = 0; i < n; ++i) 
        {
            for (int j = 0; j < n; ++j) 
            {
                if (i != j) 
                {
                    a[i] &= M[i][j]; // a[i]是所有M[i][j] (j≠i)的按位与
                }
            }
        }
        // 步骤2：验证候选数组是否满足条件
        bool valid = true;
        for (int i = 0; i < n && valid; ++i) 
        {
            for (int j = 0; j < n && valid; ++j) 
            {
                if (i != j) {
                    if ((a[i] | a[j]) != M[i][j]) 
                    {
                        valid = false;
                    }
                }
            }
        }
        
        // 步骤3：输出结果
        if (valid) 
        {
            std::cout << "YES\n";
            for (int i = 0; i < n; ++i) 
            {
                std::cout << a[i] << " ";
            }
            std::cout << "\n";
        } 
        else 
        {
            std::cout << "NO\n";
        }
    }
    return 0;
}