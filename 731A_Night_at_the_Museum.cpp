#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	char a[100];
	while(cin>>a)
	{
		int sum=0;
		if(a[0]-'a'>13) sum+=(26-a[0]+'a');
		else sum+=(a[0]-'a');
		for(int i=0;a[i+1]!=0;i++)
		{
			if(abs(a[i+1]-a[i])>13)
				sum+=(26-abs(a[i+1]-a[i]));
			else sum+=abs(a[i+1]-a[i]);
		}
		cout<<sum<<endl;
	}
	return 0;
}