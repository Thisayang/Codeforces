#include <iostream>
using namespace std;
int main()
{
	int n,a;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>a;
			int p=a/7;
			if(a%7!=0) p++;
			cout<<p<<endl;;
		}
	}
	return 0;
}