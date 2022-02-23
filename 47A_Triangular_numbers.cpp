#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0;i<34;i++)
			if(i*(i+1)/2==n)
			{
				cout<<"YES"<<endl;
				break;
			}				
			else if(i*(i+1)/2>n)
			{
				cout<<"NO"<<endl;
				break;
			}
	}
	return 0;
}