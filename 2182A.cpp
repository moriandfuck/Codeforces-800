#include<iostream>
#include<vector>
#include<string>
#define mian main
#define Min(a,b) ((a)<=(b) ? (a):(b))
bool is_good(std::string s)
{
    bool has2026 =(s.find("2026") !=std::string::npos);//找到了
    bool has2025 =(s.find("2025") !=std::string::npos);//没找到

    if(has2026) return true;
    if(!has2025) return true;
    return false;
}
int main(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin>>t;//1~10^4
    while(t--)
    {
        int n;
        std::string s;
        std::cin>>n>>s;//4~20
        if(is_good(s)==true)
        {
            std::cout<<0<<std::endl;
            continue;
        }
        int cost1=4;//组装2026最多能换四个数字
        int cost2=1;//破坏2025只需要改换1个数字
        //处理组装部分的逻辑
        std::string aim = "2026";
        for(int i=0;i<n-3;i++)
        {
            int cnt=0;
            for(int j=0;j<4;j++)
            {
                if(s[i+j] != aim[j]) cnt++;

            }
            if(cnt<cost1) cost1=cnt;
        } 
        std::cout<<Min(cost1,cost2)<<std::endl;

        /*要求：
        1，有2026
        2，没有2025
        3，满足一个就行*/
        /*操作：
        选一个数用2，0，5，6任意替换*/
        /*判断：
        是否满足要求？ 是--输出0
                      否--
        看看要几次替换才能满足要求，输出替换次数*/
        //完全不会QAQ
        //可能有点会了QWQ
        //好诶，豆包神力(笑嘻嘻)

    }
    return 0;
}

