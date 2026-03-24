#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int test = 0; test < t; test++) {
        int n, s, r;
        cin >> n >> s >> r;
        
        int m = s - r;           // 被猫偷走的那个最大值
        int k = n - 1;           // 剩余骰子数量
        
        // 先输出一个最大值 m
        cout << m;
        
        // 把剩下的 r 尽量均匀地分配到 k 个骰子上，每个值在 [1, m] 之间
        int base = r / k;        // 每个骰子至少得到 base
        int extra = r % k;       // 前 extra 个骰子多得 1
        
        for(int i = 0; i < k; i++) 
        {
            int val = base;
            if(i < extra) val++;
            // 因为题目保证有解，val 一定满足 1 <= val <= m
            cout << " " << val;
        }
        cout << "\n";
    }
    return 0;
}