#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n%2) cout<<"-1";
		else
		{
			for(int i=1;i<=n;i++)
			{
				if(i%2) cout<<i+1<<' ';
				else cout<<i-1<<' ';
			}
		}
		cout<<endl;
	}
	return 0;
}