#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[1000],b[1001]={0},c[1000],sum=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=n-1;i>=0;i--)
		{
			if(b[a[i]]==0)
			{
				b[a[i]]=1;
				c[sum]=a[i];
				sum++;
			}
		}
		cout<<sum<<endl;
		for(int i=sum-1;i>=0;i--) cout<<c[i]<<' ';
		cout<<endl;
	}
	return 0;
}