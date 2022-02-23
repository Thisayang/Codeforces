#include <iostream>
using namespace std;
int main()
{
	char a[101],b[101];
	while(cin>>a>>b)
	{
		int i=0,ok=0;
		for(;a[i]!=0;) i++;
		for(int j=0;a[j]!=0;j++)
		{
			if(a[j]!=b[--i])
			{
				cout<<"NO"<<endl;
				ok=1;
				break;
			}			
		}
		if(ok==0) cout<<"YES"<<endl;
	}
	return 0;
}