/*描述
用数字1,2,3,4,...,n*n这n2个数蛇形填充规模为n*n的方阵。

蛇形填充方法为：

对于每一条左下-右上的斜线，从左上到右下依次编号1,2,...,2n-1；按编号从小到大的顺序，
将数字从小到大填入各条斜线，其中编号为奇数的从左下向右上填写，编号为偶数的从右上到左下填写。

比如n=4时，方阵填充为如下形式：

1  2  6  7
3  5  8  13
4  9  12 14
10 11 15 16
输入
输入一个不大于10的正整数n，表示方阵的行数。
输出
输出该方阵，相邻两个元素之间用单个空格间隔*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, i, j, x=1;
   int a[10][10]={0};
   cin >> n;
   for(i=0;i<=2*n-2;i++){
       for(j=i;j>=0;j--){
           if(j<n&i-j<n){
               if(i%2!=0) //当i为奇数时，从右上到左下遍历
 	               a[i-j][j] = x++;
               else //当i为时偶数，从左下到右上遍历
                   a[j][i-j] = x++;
           }
       }
   }
   for(i=0;i<n;i++){
       for(j=0;j<n;j++)
     	   cout << a[i][j] << " ";
       cout << endl;
   }
   return 0;
}

