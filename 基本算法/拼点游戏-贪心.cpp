/*描述
C和S两位同学一起玩拼点游戏。有一堆白色卡牌和一堆蓝色卡牌，每张卡牌上写了一个整数点数。
C随机抽取n张白色卡牌，S随机抽取n张蓝色卡牌，他们进行n回合拼点，每次两人各出一张卡牌，点数大者获得三
颗巧克力，小者获得一颗巧克力，如果点数相同，每人各得二颗巧克力，使用过的卡牌不得重复使用。已知C和S
取到的卡牌点数，请编程计算S最多和最少能得到多少颗巧克力。
输入
输入包含多组测试数据。
每组测试数据的第一行是一个整数n(1<=n<=1000)，接下来一行是n个整数，表示C抽到的白色卡牌的点数，下一行
也是n个整数，表示S抽到的蓝色卡牌的点数。 
输入的最后以一个0表示结束。
输出
对每组数据，输出一行，内容是两个整数用空格格开，分别表示S最多和最少可获得的巧克力数。*/
#include <iostream>
#include<algorithm>
using namespace std; 
//参考的，使用田忌赛马的思路 
int n,a[1100],b[1100],ma,mi;
int f(int a[],int b[]){
    int ans=0;
    int l1=1,r1=n,l2=1,r2=n;
    while(l1<=r1&&l2<=r2){
        if(b[r2]>a[r1]){r2--;r1--;ans+=3;}//(1)
        else if(b[l2]>a[l1]){l1++;l2++;ans+=3;}//(2)
        else if(b[l2]==a[r1]){l2++;r1--;ans+=2;}//(3)
        else{r1--;l2++;ans++;}//(4)
    }
    return ans;
}
int main(int argc, char *argv[]) {
    while(cin>>n){
        if(n==0)break;
        ma=0;mi=0;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];
        sort(a+1,a+n+1);
        sort(b+1,b+n+1);
        ma=f(a,b);
        mi=4*n-f(b,a);
        cout<<ma<<" "<<mi<<endl;
    }
    return 0;
}
