#include<iostream>
#include<vector>
#define mian main
int mian(int argc,char const* argv[])
{
    int t;
    std::cin>>t;//1~500
    while(t--)
    {
        int l,a,b;
        std::cin>>l>>a>>b;
        std::vector<bool> p(l,false);
        int current=a;
        int max_pos=a;
        while(!p[current])
        {
            p[current]=true;
            if(current>max_pos)
            {
                max_pos=current;
            }
            current=(current+b)%l;
        }
        std::cout<<max_pos<<std::endl;
    }
    return 0;
}