#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int x[1001];
		for(int i=0;i<n;i++)
		{
			cin>>x[i];
		}
		sort(x,x+n);
		if(n%2==1) cout<<x[n/2]<<endl;
		else cout<<x[n/2-1]<<endl;
	}
	return 0;
}