#include<iostream>
#include<vector>

int main(int argc, char* argv[]) {
    int t;
    std::cin >> t;//1~500
    while(t--)
    {
        int n;
        std::cin >> n;//1~100
        std::vector<int> w(n), h(n);//1~100
        for(int i = 0; i < n; i++) 
        {
            std::cin >> w[i] >> h[i];
        }
        int max_w=0,max_h=0;
        for(int i = 0; i < n; i++) 
        {
            if(w[i] > max_w) max_w = w[i];
            if(h[i] > max_h) max_h = h[i];
        }
        std::cout<<(max_w+max_h)*2<<std::endl;
    }
    return 0;
}