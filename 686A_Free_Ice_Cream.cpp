#include <iostream>
using namespace std;
int main()
{
	long long n,m;
	while(cin>>n>>m)
	{
		long long a,sum=0;
		char c;
		while(n--)
		{
			cin>>c>>a;
			if(c=='+') m+=a;
			else
			{
				if(m>=a) m-=a;
				else sum++; 
			}
		}
		cout<<m<<' '<<sum<<endl;
	}
	return 0;
}