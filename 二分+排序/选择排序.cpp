#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,min;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
	 }
	 for(int i=0;i<n;i++)
	 cout<<a[i]<<" "; 
    return 0;
}
