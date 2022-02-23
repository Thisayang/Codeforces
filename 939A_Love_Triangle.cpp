#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[5001],ok=0;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++)
		{
			if(a[a[a[i]]]==i)
			{
				cout<<"YES"<<endl;
				ok=1;
				break;
			}
		}
		if(ok==0) cout<<"NO"<<endl;
	}
	return 0;
}