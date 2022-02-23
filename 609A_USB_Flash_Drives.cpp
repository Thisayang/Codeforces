#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int a[1000],sum=0,cnt=0;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=n-1;i>=0;i--)
		{
			sum+=a[i],cnt++;
			if(sum>=m)
			{
				cout<<cnt<<endl;
				break;
			}				
		}			
	}
	return 0;
}