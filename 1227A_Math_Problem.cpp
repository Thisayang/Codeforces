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
		vector<pair<int,int>> a(n);
		FOR(i, 0, n) {
			cin >> a[i].first >> a[i].second;
		}
		sort(a.begin(), a.end());
		int st = a[0].second, end = a[n - 1].first;
		FOR(i, 1, n) {
			if (a[i].first < st && a[i].second < st) {
				st = a[i].second;
			}
		}
		cout << max(end - st, 0) << endl;
	}
	return 0;
}