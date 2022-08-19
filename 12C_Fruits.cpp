#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	string s;
	cin >> n >> m;
	vector<int> a(n), b;
	map<string, int> mp;
	FOR(i, 0, n) cin >> a[i];
	sort(a.begin(), a.end());
	FOR(i, 0, m) {
		cin >> s;
		mp[s] ++;
	}
	for (auto it = mp.begin(); it != mp.end(); ++ it) {
		b.push_back(it->second);
	}
	sort(b.rbegin(), b.rend());
	int mn = 0, mx = 0;
	FOR(i, 0, b.size()) {
		mn += b[i] * a[i];
	}
	FOR(i, 0, b.size()) {
		mx += b[i] * a[n - i - 1];
	}
	cout << mn << " " << mx << endl;
	return 0;
}