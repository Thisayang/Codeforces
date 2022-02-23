#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		char s[50];
		int sum=0;
		cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]==s[i+1]) sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}