#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a=n/2,b=n/2;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
		if(i+j>=a&&i+j<=b) cout<<'D';
				else cout<<'*';
			cout<<endl;
			if(i<n/2) b+=2;
			if(i>=n/2) a+=2;
		}
	}
	return 0;
}