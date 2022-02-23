#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		for(int i=1;;i++)
			if(i*a%10==b||i*a%10==0)
			{
				cout<<i<<endl;
				break;
			}					
	}
	return 0;
}