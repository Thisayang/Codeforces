#include <iostream>
using namespace std;
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		int x=0;
		while(n&&m)
		{
			x++;
			n--;
			m--;
		}
		int y=m/2+n/2;
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}