#include<iostream>
#define mian main
#include<cmath>
int calc(int white, int black, int first_color);

int main(int argc,char const* argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin>>t;//1~10^4
    while(t--)
    {
        int a,b;
        std::cin>>a>>b;//1~10^6
        int white_up=calc(a,b,1);
        int black_up=calc(a,b,0);
        std::cout<<(white_up<=black_up ? black_up:white_up)<<std::endl;
    }
    return 0;
}
int calc(int white, int black, int first_color) {
    int layers = 0;
    int size = 1;          // 当前层所需大小，从1开始
    int need_white = (first_color == 1); // 第一层是否用白色

    while (true) {
        if (need_white) {
            if (white >= size) {
                white -= size;
            } else {
                break;
            }
        } else {
            if (black >= size) {
                black -= size;
            } else {
                break;
            }
        }
        layers++;
        size *= 2;          // 下一层大小翻倍
        need_white = !need_white; // 颜色交替
    }
    return layers;
}