#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin >> n)
	{
		int a,sum = 0,ans = 0;
		for(int i = 0;i < n;i ++)
		{
			cin >> a;
			sum += a;
		}
		for(int i = 0;i < n;i ++)
		{
			cin >> a;
			ans += a;
		}			
		if(sum >= ans) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}