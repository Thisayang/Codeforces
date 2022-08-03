#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
bool cmp(std::string s, std::string t) {
	return s.length() < t.length();
}
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, mx = 0;
	cin >> n >> k;
	map<int, int> mp;
	vector<string> s(n);
	string t;
	FOR(i, 0, n) {
		cin >> s[i];
		mp[s[i].length()] ++;
		mx = max(mx, int(s[i].length()));
	}
	cin >> t;
	vector<int> a;
	int sum = 0, ans = 0;
	if (mp.size() == 1) {
		cout << 1 << " ";
	} else {
		for (auto it = mp.begin(); it != mp.end(); ++ it) {
			if (it->first < t.length() ) sum += it->second;
		}
		cout << 1 + sum + sum / k * 5 << " ";
	}
	for (auto it = mp.begin(); it != mp.end(); ++ it) {
		if (it->first <= t.length() ) ans += it->second;
	}
	cout << ans + (ans - 1) / k * 5 << endl;
	return 0;
}