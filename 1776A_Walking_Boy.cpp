#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	int tmp = 0;
	int ans = 0;
	int a;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (a - tmp >= 120) {
			ans += (a - tmp) / 120;
		}
		tmp = a;
	}
	ans += (1440 - tmp) / 120;
	return ans;
}

int main(void)
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << (Solve(n) > 1 ? "YES" : "NO") << endl;
	}
	return 0;
}