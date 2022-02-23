#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[25];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		if(a[n-1]<25) cout<<0<<endl;
		else cout<<a[n-1]-25<<endl;
	}
	return 0;
}