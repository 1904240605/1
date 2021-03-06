//给出n个整数和x，请问这n个整数中是否存在三个数a，b，c使得ax2+bx+c=0，数字可以重复使用
#include<bits/stdc++.h>
using namespace std;
int a[1005],n,x;
int main()
{
	cin>>n>>x;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a+0,a+n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int mid,l=0,r=n-1;
			mid=l+(r-l)/2;
			while(l<=r)
			{
				if((a[i]*x*x+a[j]*x+a[mid])==0)
				{
					cout<<"YES"<<endl;
					return 0;
				}
				else if((a[i]*x*x+a[j]*x+a[mid])<0)
				l=mid+1;
				else
				r=mid-1;
				mid=l+(r-l)/2;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
