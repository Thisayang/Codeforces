#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, od = 0, en = 0;
	cin >> n;
	vector<int> a(n / 2);
	FOR(i, 0, n / 2) cin >> a[i];
	sort(a.begin(), a.end());
	FOR(i, 0, n / 2) {
		od += abs(a[i] - (i + 1) * 2);
		en += abs(a[i] - (i * 2 + 1));
	}
	cout << min(od, en) << endl;
	return 0;
}