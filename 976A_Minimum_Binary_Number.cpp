#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		char a[100];
		int sum=0,ans;
		cin>>a;
		for(int i=0;i<n;i++)
		{
			if(a[i]=='1') sum++;
		}
		ans=n-sum;
		while(sum>=1) cout<<1,sum=0;
		for(;ans>0;ans--) cout<<0;
		cout<<endl;
	}
	return 0;
}