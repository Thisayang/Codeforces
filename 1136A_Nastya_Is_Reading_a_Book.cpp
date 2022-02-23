#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[100][2],s;
		for(int i=0;i<n;i++)
			cin>>a[i][0]>>a[i][1];
		cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s>=a[i][0]&&s<=a[i][1]) cout<<n-i<<endl;;
		}
	}
	return 0;
}