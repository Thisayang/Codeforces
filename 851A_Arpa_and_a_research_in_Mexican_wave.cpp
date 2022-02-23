#include <iostream>
using namespace std;
int main()
{
	long long n,m,t;
	while(cin>>n>>m>>t)
	{
		if(t<=m) cout<<t<<endl;
		else if(t<=n) cout<<m<<endl;
		else cout<<m+n-t<<endl;
	}
	return 0;
}