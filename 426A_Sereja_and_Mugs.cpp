#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int a[100],sum=0;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n-1;i++) sum+=a[i];
		if(sum<=m) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}