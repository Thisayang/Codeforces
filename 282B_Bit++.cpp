#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		char a[4];
		int ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a[1]=='+') ans++;
			else ans--;
		}	
		cout<<ans<<endl;
	}
	return 0;
}