#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n)
	{
		m=n;
		char x[100000][2];
		for(int i=0;i<n;i++)
		{
			cin>>x[i];
			if(i==0) continue;
			else
			{
				if(x[i-1][1]!=x[i][0]) m--;
			}
		}
		cout<<m<<endl;
	}
	return 0;
}