#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<int> a(n);
		set<int> sett;
		int tmp = 1e9 + 10;
		FOR(i, 0, n) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		FOR(i, 0, n - 1) {
			tmp = min(tmp, a[i + 1] - a[i]);
		}
		int i = 0;
		for ( ;i < n - 1; ++ i) {
			if (a[i + 1] - a[i] == tmp) break;
		}
		cout << a[i] << " ";
		FOR(j, i + 2, n) cout << a[j] << " ";
		FOR(j, 0, i) cout << a[j] << " ";
		cout << a[i + 1] << endl;
	}
	return 0;
}