#include <iostream>
using namespace std;
int main()
{
	char a[1000];
	while(cin>>a)
	{
		int i;
		for(i=0;a[i+1]!=0;i++) cout<<a[i];
		for(;i>=0;i--) cout<<a[i];
		cout<<endl;
	}
	return 0;
}