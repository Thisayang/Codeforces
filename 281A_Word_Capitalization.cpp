#include <iostream>
using namespace std;
int main()
{
	char s[1000];
	while(cin>>s)
	{
		if(s[0]>='a') s[0]-=32;
		cout<<s<<endl;
	}
	return 0;
}