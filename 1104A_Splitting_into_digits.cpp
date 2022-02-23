#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=9;i>0;i--)
		{
			if(n%i==0)
			{
				cout<<n/i<<endl;
				for(int j=0;j<n/i;j++) cout<<i<<' ';
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}