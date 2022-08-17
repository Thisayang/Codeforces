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
		int flg = 0;
		vector<int> a(n), pref(n), suff(n); 
		FOR(i, 0, n) {
			cin >> a[i];
		}
		pref[0] = a[0];
		FOR(i, 1, n) {
			pref[i] = max(pref[i - 1], a[i]);
		}
		suff[n - 1] = a[n - 1];
		ROF(i, n - 2, -1) {
			suff[i] = max(suff[i + 1], a[i]);
		}
		bool ok = true;
		FOR(i, 1, n - 1) {
			if (pref[i - 1] > a[i] && a[i] < suff[i + 1]) {
				ok = false;
			}
		}
		cout << (ok ? "YES" : "NO") << endl;
	}
	return 0;
}