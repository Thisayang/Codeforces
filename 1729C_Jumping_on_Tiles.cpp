#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
bool cmp(std::pair<char, int> a, std::pair<char, int> b) {
	if (a.first != b.first) return a.first < b.first;
	return a.second < b.second;
}
bool rcmp(std::pair<char, int> a, std::pair<char, int> b) {
	if (a.first != b.first) return a.first > b.first;
	return a.second < b.second;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans, cnt;
	string s;
	cin >> n;
	FOR(i, 0, n) {
		cin >> s;
		int len = s.length();
		vector<pair<char, int>> a;
		vector<int> c(26, 0);
		FOR(i, 0, len) {
			a.push_back(make_pair(s[i], i + 1));
			c[s[i] - 'a'] ++;
		}
		int cnt1 = 0, cnt2 = 0;
		if (s[0] > s[len - 1]) {
			sort(a.begin(), a.end(), rcmp);
			ROF(i, 25, s[0] - 'a') cnt1 += c[i];
			FOR(i, 0, s[len - 1] - 'a') cnt2 += c[i];
		} else {
			sort(a.begin(), a.end(), cmp);
			FOR(i, 0, s[0] - 'a') cnt1 += c[i];
			FOR(i, s[len - 1] - 'a' + 1, 26) cnt2 += c[i];
		}
		ans = abs(s[0] - s[len - 1]);
		cout << ans << " " << len - cnt1 - cnt2 << endl;
		FOR(i, cnt1, len - cnt2) cout << a[i].second << " ";
		cout << endl;
	}
	return 0;
}