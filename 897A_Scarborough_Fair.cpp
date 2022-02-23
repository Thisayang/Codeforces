#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		string s;
		cin>>s;
		while(m--)
		{
			int x,y;
			char a,b;
			cin>>x>>y>>a>>b;
			for(int i=x;i<=y;i++)
			{
				if(s[i-1]==a) s[i-1]=b;
			}
		}
		cout<<s<<endl;
	}
	return 0;
}