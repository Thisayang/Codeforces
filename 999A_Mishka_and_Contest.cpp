#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int a[100],sum=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++)
		{	
			if(a[i]<=m) sum++;
			else break;
		}
		for(int i=n-1;i>=0;i--)
		{	
			if(a[i]<=m) sum++;
			else break;
		}
		if(sum>n) cout<<n<<endl;
		else cout<<sum<<endl;
	}
	return 0;
}