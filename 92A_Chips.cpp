#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		for(int i=1;m>=i;i++)
		{
			m-=i;
			if(i==n) i=0;
		}
		cout<<m<<endl;
	}
	return 0;
}