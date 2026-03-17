#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        vector<int> cnt(26, 0);
        for (char c : s) 
        {
            cnt[c - 'a']++;
        }
        int odd_cnt = 0;
        for (int num : cnt) 
        {
            if (num % 2 != 0)  odd_cnt++;
        }
        if(k>=(odd_cnt-1)) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
        
    }
    return 0;
}