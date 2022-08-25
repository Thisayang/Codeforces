#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	double l;
	cin >> n >> l;
	vector<double> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	double ans = a[0];
	FOR(i, 1, n){
		ans = max(ans, (a[i] - a[i - 1]) / 2);
	}
	ans = max(ans, l - a[n - 1]);
	printf("%.10lf\n", ans);
	return 0;
}