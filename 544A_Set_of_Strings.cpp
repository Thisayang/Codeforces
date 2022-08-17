#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k;
	string s;
	set<char> sett;
	cin >> k >> s;
	int l = s.length();
	FOR(i, 0, l) {
		sett.insert(s[i]);
	}
	if (sett.size() < k) {
		cout << "NO" << endl;
	} else {
		sett.clear();
		sett.insert(s[0]);
		cout << "YES" << endl;
		int cnt = 0;
		FOR(i, 0, k) {
			if (i == k - 1) {
				FOR(j, cnt, l) cout << s[j];
			} else {
				FOR(j, cnt, l) {
					if (sett.find(s[j]) == sett.end()) {
						sett.insert(s[j]);
						cnt = j;
						break;
					} else {
						cout << s[j];
					}
				}
			}
			cout << endl;
		}
	}
	return 0;
}