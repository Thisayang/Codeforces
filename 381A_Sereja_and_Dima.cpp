#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[1000],x=0,y=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0,j=n-1,l=0;l<n;l++)
		{
			if(l%2==0)
			{
				if(a[i] >= a[j]) x+=a[i ++];
				else x+=a[j ++];			
			}
			else
			{
				if(a[i]>=a[j]) y+=a[i ++];
				else y+=a[j--];		
			}				
		}
		cout<<x<<' '<<y<<endl;
	}
	return 0;
}