#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[200000],x=0,y=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==0) x++;
			else y++;
		}			
		for(int i=0;i<n;i++)
		{
			if(a[i]==0) x--;
			else y--;
			if(x==0||y==0)
			{
				cout<<i+1<<endl;
				break;
			}				
		}
	}
	return 0;
}