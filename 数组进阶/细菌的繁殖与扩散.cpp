/*描述
在边长为9的正方形培养皿中，正中心位置有m个细菌。假设细菌的寿命仅一天，但每天可繁殖10个后代，而
且这10个后代，有两个分布在原来的单元格中，其余的均匀分布在其四周相邻的八个单元格中。求经过
n(1≤n≤4)天后，细菌在培养皿中的分布情况。

输入
输入为两个整数，第一个整数m表示中心位置细菌的个数（2 ≤ m ≤ 30），第二个整数n表示经过的天数
（1 ≤ n ≤ 4）。
输出
输出九行九列整数矩阵，每行的整数之间用空格分隔。整个矩阵代表n天后细菌在培养皿上的分布情况。*/
#include<bits/stdc++.h>
using namespace std;
int a[10][10];
int b[10][10];
int dx[]={1,1,1,0,0,-1,-1,-1}; //从上到下 
int dy[]={-1,0,1,-1,1,-1,0,1}; //从上到下 
int main()
{
	int n,m;
	cin>>a[5][5]>>m;
	while(m)
	{	
		m--;
		for(int i=1;i<=9;i++)
		for(int j=1;j<=9;j++)
		{
			b[i][j]+=2*a[i][j];
			for(int k=0;k<8;k++)
			{
				int x=i+dx[k], y=j+dy[k];
					b[x][y]+=a[i][j];
			}
		}
		memcpy(a,b,sizeof(b)); //将新的细菌拷贝到a数组 
		memset(b,0,sizeof(b)); //将b数组清零 
	}
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
			cout<<a[i][j]<<' ';
		cout<<endl;
	}
	return 0;
	
}
