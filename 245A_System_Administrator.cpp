#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a,b,c,s[1001][2]={0},max=0;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b>>c;
			s[a][0]+=b;
			s[a][1]+=c;
			if(a>max) max=a;
		}
		for(int i=1;i<=max;i++)
		{
			if(s[i][0]>=s[i][1]) cout<<"LIVE"<<endl;
			else cout<<"DEAD"<<endl;
		}
	}
	return 0;
}