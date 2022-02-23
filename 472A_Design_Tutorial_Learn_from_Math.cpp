#include <iostream>
using namespace std;
int a[1000000]={0,0,0};
void s()
{
	for(int i=2;i<1001;i++)
	{
		if(a[i]==1) continue;
		for(int j=2;i*j<=1000000;j++)
			a[i*j]=1;
	}
}
int main()
{
	int n;
	s();
	while(cin>>n)
	{
		for(int i=4;i<n;i++)
		{
			if(a[i]==1&&a[n-i]==1)
			{
				cout<<i<<' '<<n-i<<endl;
				break;
			}
		}
	}
	return 0;
}