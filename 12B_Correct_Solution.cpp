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
	sort(s.begin(), s.end());
	for (int i = 0; s[i] != 0; ++ i) {
		if (s[i] != '0') {
			swap(s[0], s[i]);
			break;
		}
	}
	if (s == t) cout << "OK" << endl;
	else cout << "WRONG_ANSWER" << endl;
	return 0;
}