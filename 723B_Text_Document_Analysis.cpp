#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, cnt = 0, flg = 0, a = 0, b = 0;
	string s;
	cin >> n >> s;
	for (int i = 0; s[i] != 0; ++ i) {
		if (s[i] == '(') {
			flg = 1;
			a = max(a, cnt);
			cnt = 0;
		} else if (s[i] == ')') {
			flg = 0;
			if (cnt != 0) b ++;
			cnt = 0;
		} else if (s[i] == '_' && flg == 0) {
			if (cnt != 0) {
				a = max(a, cnt);
				cnt = 0;
			}
		} else if (s[i] == '_' && flg == 1) {
			if (cnt != 0) {
				b ++;
				cnt = 0;
			}
		} else {
			cnt ++;
		}
	}
	a = max(a, cnt);
	cout << a << " " << b << endl;
	return 0;
}