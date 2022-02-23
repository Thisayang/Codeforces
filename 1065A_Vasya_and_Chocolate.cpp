#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		long long s,a,b,c;
		while(n--)
		{
			cin>>s>>a>>b>>c;
			cout<<(s/c)+(s/c/a*b)<<endl;
		}
	}
	return 0;
}