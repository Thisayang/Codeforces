#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[40],b[40],sum=0;
		for(int i=0;i<n;i++)
			cin>>a[i]>>b[i];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j) continue;
				if(a[i]==b[j]) sum++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}