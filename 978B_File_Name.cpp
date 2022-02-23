#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		string x;
		int y=0;
		cin>>x;
		for(int i=0;i<n-2;i++) if(x[i]=='x'&&x[i+1]=='x'&&x[i+2]=='x') y++;
		cout<<y<<endl;
	}
	return 0;
}