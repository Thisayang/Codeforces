#include <iostream>
using namespace std;
int main()
{
	char a[101],b[101];
	while(cin>>a>>b)
	{
		int ok=0;
		for(int i=0;a[i]!=0;i++)
		{
			if(a[i]>='a'&&a[i]<='z') a[i]-=32;
			if(b[i]>='a'&&b[i]<='z') b[i]-=32;
			if(a[i]>b[i])
			{
				cout<<1<<endl;
				ok=1;
				break;
			}
			if(a[i]<b[i])
			{
				cout<<-1<<endl;
				ok=1;
				break;
			}
		}
		if(ok==0) cout<<0<<endl;
	}
	return 0;
}