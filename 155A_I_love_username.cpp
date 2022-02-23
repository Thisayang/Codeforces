#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int  a[1000];
		cin>>a[0];
		int max=a[0],min=a[0],sum=0;
		for(int i=1;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>max)
			{
				max=a[i];
				sum++;
			}
			if(a[i]<min)
			{
				min=a[i];
				sum++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}