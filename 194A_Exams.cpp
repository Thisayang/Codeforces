#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k;
	while(cin >> n >> k)
	{
		int tmp = k - (2 * n);
		cout << n - min(tmp, n) << endl;
	}
	return 0;
}
