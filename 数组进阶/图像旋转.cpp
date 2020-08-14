/*描述
输入一个n行m列的黑白图像，将它顺时针旋转90度后输出。

输入
第一行包含两个整数n和m，表示图像包含像素点的行数和列数。1 <= n <= 100，1 <= m <= 100。
接下来n行，每行m个整数，表示图像的每个像素点灰度。相邻两个整数之间用单个空格隔开，
每个元素均在0~255之间。
输出
m行，每行n个整数，为顺时针旋转90度后的图像。相邻两个整数之间用单个空格隔开。*/
#include<bits/stdc++.h>
using namespace std;
int a[110][110];
int b[110][110];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	//从左到右，从下到上 
	for(int j=1;j<=m;j++)
	{
		for(int i=1;i<=n;i++)
			cout<<a[n-i+1][j]<<' ';
		cout<<endl;
	}
	return 0;
	 
}
