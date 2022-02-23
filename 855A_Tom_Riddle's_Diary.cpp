#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		string x,a[100];
		int ok=0;
		for(int i=0;i<n;i++)
		{
			int l=1;
			cin>>x;
			for(int j=0;j<ok;j++)
			{
				if(a[j]==x)
				{
					cout<<"YES"<<endl;
					l=0;
				}
			}
			if(l==1)
			{
				a[ok++]=x;
				cout<<"NO"<<endl;
			}				
		}
	}
	return 0;
}