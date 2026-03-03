#include<iostream>
#include<vector>
#define Min(a,b) ((a)<=(b)? (a):(b)) 
#define Max(a,b) ((a)<=(b)? (b):(a)) 
int main(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;//测试组数1≤t≤500
    std::cin>>t;

    while(t--)
    {
        int n,h,l;;//数据个数
        std::cin>>n>>h>>l;
        std::vector<int> a(n); 
        int smler=Min(h,l);
        int biger=Max(h,l);
        int overones=0,inones=0,lowerones=0;
        //分别是大于大的，小于大的且大于小的，小于小的且大于0三种情况
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
            if(a[i]>biger) overones++;
            else if(a[i] <= biger && a[i] > smler) inones++;
            else lowerones++;
        }
        /*检验每一个数字*/
        if((inones-lowerones)>=0) std::cout<<lowerones<<std::endl;
        else std::cout<<(inones+(lowerones-inones)/2)<<std::endl;       
    }
    return 0;
}