#include<iostream>
#include<string>
#include<vector>
int main(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin>>t;//1~1000
    while(t--)
    {
        int n;
        std::cin>>n;//1~50
        std::string s;
        std::cin>>s;
        std::vector<int> point(2,0);
        bool is_over_yet = 0;
        for(int i=0;i<n;i++)
        {
            switch(s[i])
            {
                case 'L':
                    point[0]--;
                    break;
                case 'R':
                    point[0]++;
                    break;
                case 'U':
                    point[1]++;
                    break;
                case 'D':
                    point[1]--;
                    break;
            }
            if(point[0]==1 && point[1]==1) 
            {
                std::cout<<"Yes"<<std::endl;
                is_over_yet=1;
                break;
                
            }
        }
        if(! is_over_yet) std::cout<<"No"<<std::endl;

    }
    return 0;
}