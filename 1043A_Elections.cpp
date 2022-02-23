#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[100],max=0,sum=0,s=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(max<a[i]) max=a[i];
		}
		while(s<=sum)
		{
			for(int i=0;i<n;i++)
			{
				s+=max-a[i];
			}	
			if(s>sum)
			{
				cout<<max<<endl;
				break;
			}	
			max++;
			s=0;
		}
	}
	return 0;
}