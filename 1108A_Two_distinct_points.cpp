#include <iostream>
using namespace std;
int main()
{
	int a;
	while(cin>>a)
	{
		int l1,l2,r1,r2;
		while(a--)
		{
			cin>>l1>>r1>>l2>>r2;
			if(l1==l2) cout<<r1<<' '<<l2<<endl;
			else cout<<l1<<' '<<l2<<endl;
		}
	}
	return 0;
}