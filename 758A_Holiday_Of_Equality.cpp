#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[100],x,y=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(i==0) x=a[0];
			if(x<a[i]) x=a[i];
		}
		for(int i=0;i<n;i++)
		{
			y+=x-a[i];
		}
		cout<<y<<endl;
	}
	return 0;
}