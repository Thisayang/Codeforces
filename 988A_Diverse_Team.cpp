#include <iostream>
using namespace std;
int main()
{
	int x,y;
	while(cin>>x>>y)
	{
		int a[101],b[101][2]={0},sum=0;
		for(int i=1;i<=x;i++)
		{
			cin>>a[i];
			int ok=1;
			for(int j=0;j<sum;j++)
			{
				if(b[j][0]==a[i])
				{
					ok=0;
					break;
				}
			}
			if(ok==1)
			{
				b[sum][0]=a[i];
				b[sum][1]=i;
				sum++;
			}				
		}
		if(sum<y) cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			for(int i=0;i<y;i++)
			{
				cout<<b[i][1]<<' ';
			}
			cout<<endl;
		}
	}
	return 0;
}