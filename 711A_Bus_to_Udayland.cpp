#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int ok=0;
		string s[1000];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
			for(int j=0;j<sizeof(s[i])-1&&ok==0;j++)
			{
				if(s[i][j]=='O'&&s[i][j+1]=='O')
				{
					ok=1;
					s[i][j]='+';
					s[i][j+1]='+';
					break;
				}
			}
		}
		if(ok==0) cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++) cout<<s[i]<<endl;
		}
	}
	return 0;
}