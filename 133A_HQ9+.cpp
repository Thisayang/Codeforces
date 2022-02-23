#include <iostream>
using namespace std;
int main()
{
	char a[100];
	while(cin>>a)
	{
		int ok=0;
		for(int i=0;a[i]!=0;i++)
		{
			if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
			{
				ok=1;
				cout<<"YES"<<endl;
				break;
			}
		}
		if(ok==0) cout<<"NO"<<endl;
	}
	return 0;
}