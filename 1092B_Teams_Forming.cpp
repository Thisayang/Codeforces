#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[100],sum=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i+=2)
			sum+=(a[i+1]-a[i]);
		cout<<sum<<endl;
	}
	return 0;
}