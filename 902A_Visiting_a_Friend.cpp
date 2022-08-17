#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.first != b.first) return a.first < b.first;
	return a.second < b.second;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, flg = 0;
	cin >> n >> m;
	vector<pair<int, int>> a(n);
	FOR(i, 0, n) {
		cin >> a[i].first >> a[i].second;
		if (a[i].second == m) flg = 1;
	}
	sort(a.begin(), a.end(), cmp);
	if (a[0].first != 0 || flg == 0) cout << "NO" << endl;
	else {
		int st = 0, end = a[0].second, ok = 0;
		FOR(i, 1, n) {
			if(a[i].first <= end && a[i].second <= end) continue;
			if (a[i].first <= end && a[i].second > end) end = a[i].second;
			if (end == m) ok = 1;
		}
		if (end == m) ok = 1;
		cout << (ok ? "YES" : "NO") << endl;
	}
	return 0;
}