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
		FOR(i, 0, n) {
			cin >> a[i];
		}
		int st = 0, end = 0;
		FOR(i, 1, n) {
			if (a[i] == a[i - 1]) {
				st = i;
				break;
			}
		}
		ROF(i, n - 1, 0) {
			if (a[i] == a[i - 1]) {
				end = i - 1;
				break;
			}
		}
		if (st == end && st != 0 && end != 0) cout << 1 << endl;
		else if (end < st) cout << 0 << endl;
		else cout << end - st << endl;
	}
	return 0;
}