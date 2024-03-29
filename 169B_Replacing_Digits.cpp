#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s, t;
	cin >> s >> t;
	map<char, int> mp;
	FOR(i, 0, t.length()) {
		mp[t[i]] ++;
	}
	FOR(i, 0, s.length()) {
		ROF(j, '9', s[i]) {
			if (mp[j] > 0) {
				mp[j] --;
				s[i] = j;
				break;
			}
		}
	}
	cout << s << endl;
	return 0;
}