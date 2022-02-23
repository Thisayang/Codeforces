#include <iostream>
using namespace std;
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		int a,b,sum=0,ans=0;
		while(m--)
		{
			cin>>a;
			while(a)
			{
				b=a%10;
				a=a/10;
				if(b==4||b==7) ans++;
			}
			if(ans<=n) sum++;
			ans=0;
		}
		cout<<sum<<endl;
	}
	return 0;
}