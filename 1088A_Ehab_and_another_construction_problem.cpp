#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int ok=0; 
		for(int i=2;i<=n;i++)
		{
			for(int j=1;j*i<=n;j++)
			if(i*i*j>n&&i*j<=n)
			{
				cout<<i*j<<' '<<i<<endl;
				ok=1;
				break;
			}
			if(ok==1) break;			
		}
		if(ok==0) cout<<-1<<endl;
	}
	return 0;
}