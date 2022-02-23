#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a,b=0,c=0;
		while(n--)
		{
			cin>>a;
			if(a>0) b+=a;
			else c+=a;
		}
		cout<<b-c<<endl;
	}
	return 0;
}