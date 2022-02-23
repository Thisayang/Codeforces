#include <iostream>
using namespace std;
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		int p=m/2*n;
		if(m%2!=0) p+=n/2; 
		cout<<p<<endl;
	}
	return 0;
}