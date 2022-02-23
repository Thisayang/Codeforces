#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		int c,x,ok=1;
		int s[101]={0};
		while(a--)
		{
			cin>>c;
			while(c--)
			{
				cin>>x;
				s[x]=1;
			}
		}
		for(int i=1;i<=b;i++)
		{
			if(s[i]==0)
			{
				cout<<"NO"<<endl;
				ok=0;
				break;
			}
		}
		if(ok==1) cout<<"YES"<<endl;
	}
	return 0;
}