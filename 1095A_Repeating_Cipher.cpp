#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		char a[100];
		cin>>a;
		for(int i=0,j=1;i<n;i+=j)
		{
			cout<<a[i];
			j++;
		}
		cout<<endl;
	}
	return 0;
}