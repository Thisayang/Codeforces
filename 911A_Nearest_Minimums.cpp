#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, mn = 1e9 + 10, tmp = 0, ans = 1e9 + 10;
	set<int> sett;
	cin >> n;
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
		if (a[i] < mn) {
			mn = a[i];
			ans = 1e9 + 10;
			tmp = i;
		} else if (a[i] == mn) {
			ans = min(ans, i - tmp);
			tmp = i;
		}
	}
	cout << ans << endl;
	return 0;
}