/*描述
求10000以内n的阶乘。

输入
只有一行输入，整数n（0<=n<=10000）。
输出
一行，即n!的值。*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[500000];
	a[0]=a[1]=1;
	int x=1;//位数 
	for(int i=1;i<=n;i++)//高精乘 
	{
		for(int j=1;j<=x;j++)
			a[j]=a[j]*i;
			int j;
		for(j=1;j<=x;j++)
		{
			if(a[j]>=10)
			{
				a[j+1]=a[j+1]+a[j]/10;
				a[j]%=10;
			}
		}
			if(a[j]>0)//进位运算 
			{
				while(a[j]>=10)
				{
					a[j+1]=a[j+1]+a[j]/10;
					a[j]%=10;
					j++;
				}
					x=j;
			}
	}
	for(int i=x;i>=1;i--)
	cout<<a[i];
	cout<<endl;
	return 0;
}
