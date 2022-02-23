#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int m;
		while(n--)
		{
			cin>>m;
			if(m%2==0) cout<<m-1<<" ";
			else cout<<m<<" ";
		}
		cout<<endl;
	}
}