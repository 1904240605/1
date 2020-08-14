/*描述
给定n行m列的图像各像素点的灰度值，要求用如下方法对其进行模糊化处理：
1. 四周最外侧的像素点灰度值不变；
2. 中间各像素点新灰度值为该像素点及其上下左右相邻四个像素点原灰度值的平均（舍入到最接近的整数）。

输入
第一行包含两个整数n和m，表示图像包含像素点的行数和列数。1 <= n <= 100，1 <= m <= 100。
接下来n行，每行m个整数，表示图像的每个像素点灰度。相邻两个整数之间用单个空格隔开，
每个元素均在0~255之间。
输出
n行，每行m个整数，为模糊处理后的图像。相邻两个整数之间用单个空格隔开。*/
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j=0;
	double sum=0;
	double a[105][105];
	double b[105][105];
	cin>>m>>n;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(i!=1 && j!=1 && i!=m && j!=n){
				sum=(a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j+1]+a[i][j-1])/5;
				sum=int(sum+0.5);
				b[i][j]=sum;
			}
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
		cout<<b[i][j]<<" ";
		if(j==n){
		   printf("\n");
		}
		}
	}	
	return 0;
} 
