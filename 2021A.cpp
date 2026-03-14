#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
int main(int argc, char* argv[]) 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;//1~5000
    while(t--)
    {
        int n;
        std::cin>>n;//2~50
        std::vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];//1≤a[i]≤10^9
        }
        std::sort(a.begin(),a.end(),std::greater<int>());//降序排序
        
        //进行n-1次操作,
        for (int step = 0; step < n - 1; step++) 
        {
            // 当前数组末尾两个是最小的（因为降序）
            int x = a.back(); a.pop_back();
            int y = a.back(); a.pop_back();
            int temp = (x + y) / 2;
            a.push_back(temp);
            // 重新降序排序
            std::sort(a.begin(), a.end(), std::greater<int>());
        }
        std::cout<<a[0]<<std::endl;
    }
    return 0;
}