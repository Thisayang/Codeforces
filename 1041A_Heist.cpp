#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[1000];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		cout<<a[n-1]-a[0]+1-n<<endl;
	}
	return 0;
}