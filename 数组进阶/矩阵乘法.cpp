/*描述
计算两个矩阵的乘法。n*m阶的矩阵A乘以m*k阶的矩阵B得到的矩阵C 是n*k阶的，且
C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + …… +A[i][m-1]*B[m-1][j]
(C[i][j]表示C矩阵中第i行第j列元素)。

输入
第一行为n, m, k，表示A矩阵是n行m列，B矩阵是m行k列，n, m, k均小于100
然后先后输入A和B两个矩阵，A矩阵n行m列，B矩阵m行k列，矩阵中每个元素的绝对值不会大于1000。
输出
输出矩阵C，一共n行，每行k个整数，整数之间以一个空格分开。*/
#include<bits/stdc++.h>
using namespace std;
int a[110][110];
int b[110][110];
int c[110][110];
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];  //获取a矩阵的值 
	for(int i=1;i<=m;i++)
		for(int j=1;j<=k;j++)
			cin>>b[i][j]; //获取b矩阵的值 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			for(int l=1;l<=m;l++)
			{
				c[i][j]+=a[i][l]*b[l][j]; //计算c矩阵的值 
			}
			cout<<c[i][j]<<' '; //输出c矩阵 
		}
		cout<<endl;
	}
	return 0;
}
