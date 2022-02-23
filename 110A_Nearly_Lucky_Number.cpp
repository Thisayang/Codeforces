#include <iostream>
using namespace std;
int main()
{
	char a[20];
	while(cin>>a)
	{
		int s=0,ok=0,r=0;
		for(int i=0;a[i]!=0;i++)
		{
			if(a[i]=='4'||a[i]=='7') r++;
		}
		if(r==4||r==7) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}		
	return 0;
}