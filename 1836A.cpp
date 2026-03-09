#include<iostream>
#include<vector>
#include<algorithm>

// 新增：找当前accum里的有效最大值
int find_current_max(const std::vector<int>& accum) {
    for (int i = 99; i >= 0; i--) {
        if (accum[i] > 0) {
            return i;
        }
    }
    return 0;
}

int main(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;//1~100
    while(t--)
    {
        int n;
        std::cin>>n;//1~100
        std::vector<int> a(n);
        std::vector<int> accum(100, 0); // 修正1：大小100，初始0
        for(int i=0;i<n;i++) 
        {
            std::cin>>a[i];//0~99
            accum[a[i]] ++;
        }

        bool possible = true;
        // 修正4：循环条件加“还有有效数字”
        while(possible && find_current_max(accum) > 0)
        {
            int max_num = find_current_max(accum); // 修正2：从accum找最大值
            // 检查0~max_num是否都有
            for(int i=0; i<max_num+1; i++)
            {
                if(accum[i] >0)
                {
                    accum[i] --;
                }
                else 
                {
                    possible = false;
                    break; // 修正4：发现缺失，直接退出for
                }
            }
        }

        // 修正3：输出结果
        std::cout << (possible ? "YES" : "NO") << "\n";
    }
    return 0;
}