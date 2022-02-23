#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		while(n--)
		{
			long long a,b,c;
			while(cin>>a>>b>>c)
			{
				if(b*2<c)
					cout<<a*b<<endl;
				else cout<<a/2*c+a%2*b<<endl;
			}
		}
	}
	return 0;
}