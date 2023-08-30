#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k)
{
	int L = 0;
	int R = 55;
	int l;
	int r;
	for (int i = 0; i < n; ++i) {
		cin >> l >> r;
		if (l <= k && r >= k) {
			L = max(L, l);
			R = min(R, r);
		}
	}
	 return (L == R);
}

int main(void)
{
	int t;
	int n;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		cout << (Solve(n, k) ? "YES" : "NO") << endl;
	}
	return 0;
}