#include <bits/stdc++.h>

using namespace std;

bool cmp(long long a, long long b) {
	return a > b;
}

long long Solve(int n, int m)
{
	vector<long long> a(n, 0), b(m, 0);
	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		ans += a[i];
	}
	for (int i = 0; i < m; ++i) {
		cin >> b[i];
		sort(a.begin(), a.end());
		ans += b[i] - a[0];
		a[0] = b[i];
	}
	return ans;
}

int main(void)
{
	int t;
	int n;
	int m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cout << Solve(n, m) << endl;
	}
	return 0;
}