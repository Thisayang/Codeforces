#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		int s=0;
		s+=(2*a%b==0)?2*a/b:2*a/b+1;
		s+=(5*a%b==0)?5*a/b:5*a/b+1;
		s+=(8*a%b==0)?8*a/b:8*a/b+1;
		cout<<s<<endl;
	}
	return 0;
}