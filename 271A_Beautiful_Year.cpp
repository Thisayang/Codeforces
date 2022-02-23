#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=n+1;;i++)
		{	
			int a[10]={0},ok=0;
			a[i/1000]++;
			a[i/100%10]++;
			a[i/10%10]++;
			a[i%10]++;
			for(int j=0;j<10;j++) 
			{
				if(a[j]>1)
				{
					ok=1;
					break;
				}					
			}
			if(ok==0)
			{
				cout<<i<<endl;
				break;
			}				
		}
	}
	return 0;
}