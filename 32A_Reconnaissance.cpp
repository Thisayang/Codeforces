#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int a[1001];
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		int ans=0;
		for(int i=n;i>0;i--)
		{
			int sum=0;
			for(int j=i-1;j>0;j--)
			{
				if(a[i]-a[j]<=m) sum++;
			}
			ans+=sum*2;		
		}
		cout<<ans<<endl;
	}
	return 0;
}