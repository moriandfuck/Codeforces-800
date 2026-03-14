#include<iostream>
#include<vector>
#include<algorithm>
int main(int argc, char* argv[]) 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;//1~500
    while(t--)
    {
        int n;
        std::cin >> n;//1~50
        int num_of_switch=2*n;
        std::vector<int> switch_state(num_of_switch);//0~1
        int on_switch=0,off_switch=0;
        for(int i = 0; i < num_of_switch; i++) 
        {
            std::cin >> switch_state[i];
            if(switch_state[i]==1) on_switch++;
            else off_switch++;
        }
        int min_on_light=((off_switch%2==0)? 0:1);
        int max_on_light=std::min(off_switch,on_switch);
        std::cout<<min_on_light<<' '<<max_on_light<<std::endl;

        
        
    }
    return 0;
}