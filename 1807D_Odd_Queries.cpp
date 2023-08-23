#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int q)
{
	int l;
	int r;
	long long k;
	long long tmp;
	vector<long long> a(n + 1, 0);
	for (int i = 1; i <= n; ++i) {
		cin >> tmp;
		a[i] = a[i - 1] + tmp;
	}
	for (int i = 0; i < q; ++i) {
		cin >> l >> r >> k;
		long long ans = a[n] - (a[r] - a[l - 1]) + (r - l + 1) * k;
		if (ans % 2 == 1) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}

int main()
{
	int t;
	int n;
	int q;
	cin >> t;
	while (t--) {
		cin >> n >> q;
		Solve(n, q);
	}
	return 0;
}