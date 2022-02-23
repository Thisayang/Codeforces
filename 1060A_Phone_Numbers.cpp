#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		char a[100];
		cin>>a;
		int sum=0;
		for(int i=0;a[i]!=0;i++)
		{
			if(a[i]=='8') sum++;
		}
		if(sum>n/11) cout<<n/11<<endl;
		else if(sum>0) cout<<sum<<endl;
		else if(sum==0) cout<<0<<endl;
	}
	return 0;
}