#include <iostream>
using namespace std;
int main()
{
	long long a,b;
	while(cin>>a>>b)
	{
		if(a/b%2==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}