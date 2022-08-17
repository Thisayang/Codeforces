#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
bool cmp(std::pair<int, int> a, std::pair<int, int> b) {
	if (a.second != b.second) return a.second > b.second;
	return a.first > b.first; 
}
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	FOR(i, 0, n) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a.begin(), a.end(), cmp);
	int ans = 0;
	for (int flg = 1, i = 0; flg > 0 && i < n; ++ i, -- flg) {
		flg += a[i].second;
		ans += a[i].first;
	}
	cout << ans << endl;
	return 0;
}