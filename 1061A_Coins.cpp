#include <iostream>
using namespace std;
int main()
{
	int n,c;
	while(cin>>n>>c)
	{
		int ok=0;
		if(c%n!=0) ok=1;
		cout<<c/n+ok<<endl;
	}
	return 0;
}