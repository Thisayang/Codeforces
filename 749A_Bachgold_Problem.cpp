#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		cout<<n/2<<endl;
		while(n>3)
		{
			cout<<2<<" ";
			n-=2;
		}
		cout<<n<<endl;
	}
	return 0;
}