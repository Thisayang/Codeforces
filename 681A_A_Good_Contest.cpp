#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		char s[100];
		int a,b,ok=0;
		while(n--)
		{
			cin>>s>>a>>b;
			if(a>=2400&&a<b) ok=1;
		}
		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}