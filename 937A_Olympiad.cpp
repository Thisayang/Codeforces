#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[100];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int ok=0,sum=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==0) continue;
			else if(a[i]!=ok) sum++,ok=a[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}