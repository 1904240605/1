/*描述
任何一个正整数都可以用2的幂次方表示。例如：

    137=27+23+20

同时约定方次用括号来表示，即ab可表示为a(b)。由此可知，137可表示为：

    2(7)+2(3)+2(0)

进一步：7=22+2+20（21用2表示）

        3=2+20

所以最后137可表示为：

    2(2(2)+2+2(0))+2(2+2(0))+2(0)

又如：

    1315=210+28+25+2+1

所以1315最后可表示为：

    2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2(0))+2+2(0)

输入
一个正整数n（n≤20000）。
输出
一行，符合约定的n的0，2表示（在表示中不能有空格）。*/
#include<iostream>
using namespace std;
int n;
void f(int x){
    if(x==1){
        cout<<"2(0)";
        return;
    }
    else if(x==2){
        cout<<"2";
        return;
    }
    int k=0,r=1;
    while(r<=x){
        r=r*2;
        k++;
    }
    k--;
    if(k==1){
        //x=3的时候，不需要括号,也就是不需要递归 
        cout<<"2"; 
    }
    else{
        cout<<"2(";
        f(k);
        cout<<")"; 
    }
    if(x>r/2){
        cout<<"+";
        f(x-r/2);
    }
}
int main(){
    while(cin>>n){
        f(n);
        cout<<endl;
    }
}
