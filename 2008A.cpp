#include<iostream>
#include<algorithm>

int main(int argc,char const* argv[])
{
    int t;
    std::cin>>t;//1~100
    while(t--)
    {
        int a,b;
        std::cin>>a>>b;//0~9
        //a个1，b个2
        int all=a+2*b;
        if(all%2!=0) 
        {
            std::cout<<"No\n";
            continue;
        }
        int half=all/2;
        bool possible=false;
        for (int y = 0; y <= b; ++y) {
            int remaining = half - 2 * y; // 剩下需要用1凑的数量
            // 剩余数量需非负，且不超过1的总数a
            if (remaining >= 0 && remaining <= a) 
            {
                possible = true;
                break;
            }
        }
        std::cout << (possible ? "Yes" : "No") << std::endl;
    }
    return 0;
}