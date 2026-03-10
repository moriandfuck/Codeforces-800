#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long f, a, b;
        cin >> n >> f >> a >> b;
        vector<long long> msg(n);
        for (int i = 0; i < n; ++i) {
            cin >> msg[i];
        }
        
        long long total_cost = 0;
        long long prev = 0;
        bool can_send = true;
        
        for (int i = 0; i < n; ++i) {
            long long delta = msg[i] - prev;
            // 核心：计算当前间隔的最小消耗（必须用long long避免溢出）
            long long cost = min(delta * a, b);
            
            // 关键：累加前先判断是否溢出/超过f（避免total_cost溢出后判断错误）
            if (total_cost > f - cost) {
                can_send = false;
                break;
            }
            total_cost += cost;
            
            prev = msg[i];
        }
        
        // 最终判断：总消耗必须 < f（因为剩余电量f-total_cost要>0才能发消息）
        cout << (can_send && total_cost < f ? "YES" : "NO") << '\n';
    }
    return 0;
}