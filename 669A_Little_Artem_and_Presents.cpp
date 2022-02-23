#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int ok=n/3*2;
		if(n%3!=0) ok++;
		cout<<ok<<endl;
	}
	return 0;
}