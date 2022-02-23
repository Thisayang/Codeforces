#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int x[101]={0},t=0;
		while(n--)
		{
			cin>>t;
			x[t]++;
		}
		int max=0;
		for(int i=1;i<101;i++)
		{
			if(x[i]>max) max=x[i];
		}
		cout<<max<<endl;
	}
	return 0;
}