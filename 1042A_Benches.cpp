#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, sum = 0;
	cin >> n >> m;
	sum += m;
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a.begin(), a.end());
	int max = a[n - 1] + m, min = a[n - 1];
	FOR(i, 0, n - 1) {
		if (m >= a[n - 1] - a[i]) m -= a[n - 1] - a[i];
		else m = 0;
	}
	min += (m + n - 1) / n;
	cout << min << " " << max << endl;
	return 0;
}