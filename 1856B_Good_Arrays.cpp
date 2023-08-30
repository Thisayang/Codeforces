#include <bits/stdc++.h>

using namespace std;

long long Solve(int n)
{
	long long tmp;
	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		if (tmp != 1) {
			ans += tmp;
		}
	}
	ans = ((n == 1 || (ans < n)) ? 0 : 1);
	return ans;
}

int main(void)
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << (Solve(n) ? "YES" : "NO") << endl;
	}
	return 0;
}