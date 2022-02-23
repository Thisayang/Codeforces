#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[200001];
		char s;
		int l=1;
		int r=l-1;
		while(n--)
		{
			int num;
			cin>>s>>num;
			if(s=='L')
			{
				l--;
				a[num]=l;
			}
			else if(s=='R')
			{
				r++;
				a[num]=r;
			}
			else
			{
				int res;
				if(a[num]-l<r-a[num]) res=a[num]-l;
				else res=r-a[num];
				cout<<res<<endl;
			}
		}
	}
	return 0;
}