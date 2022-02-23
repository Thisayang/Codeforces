#include <iostream>
using namespace std;
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		int a,b[100]={0},sum=0;
		for(int i=0;i<m;i++) 
		{
			cin>>a;
			b[a%n]++;
		}
		sum=(b[0]/2*2);
		for(int i=1;i<=n/2;i++)
		{
			if(n-i==i)
			{
				sum+=(b[i]/2*2);
				continue;
			}
			if(b[n-i]>=b[i]) sum+=(b[i]*2);
			else sum+=(b[n-i]*2);
		}
		cout<<sum<<endl;		
	}
	return 0;
}