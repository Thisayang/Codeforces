#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	vector<string> s(n);
	FOR(i, 0, n) {
		cin >> s[i];
	}
	sort(s.begin(), s.end(), [&] (const string &s, const string &t) {
		return s.size() < t.size();
	});
	FOR(i, 0, n - 1) {
		if (s[i + 1].find(s[i]) == string::npos) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	for (auto it : s) {
		cout << it << endl;
	}
	return 0;
}