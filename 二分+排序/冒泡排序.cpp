#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n-i;j++)
		{
			if(a[j-1]>a[j])
			{
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	 }
	 for(int i=0;i<n;i++)
	 cout<<a[i]<<" "; 
    return 0;
}
