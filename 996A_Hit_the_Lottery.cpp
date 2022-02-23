#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int num=0;
		if(n>=100) num+=n/100,n%=100;
		if(n>=20) num+=n/20,n%=20;
		if(n>=10) num+=n/10,n%=10;
		if(n>=5) num+=n/5,n%=5;
		if(n>=1) num+=n/1;
		cout<<num<<endl;
	}
	return 0;
}