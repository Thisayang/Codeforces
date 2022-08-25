#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	set<char> st;
	int cnt = 1, x = 10;
	cin >> s;
	if (s[0] == '?') {
		cnt *= 9;
	} else if (s[0] >= 'A' && s[0] <= 'J') {
		cnt *= 9;
		x = 9;
		st.insert(s[0]);
	}
	FOR(i, 1, s.length()) {
		if (s[i] == '?') {
			cnt *= 10;
		} else if (s[i] >= 'A' && s[i] <= 'J' && st.find(s[i]) == st.end()) {
			cnt *= x;
			st.insert(s[i]);
			x --;
		}
	}
	cout << cnt << endl;
	return 0;
}