#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		char a[65000];
		int s=0;
		cin>>a;
		for(int i=0;a[i]!=0;i++)
		{
			if((a[i]-'0')%2==0) s+=i+1;
		}
		cout<<s<<endl;
	}
	return 0;
}