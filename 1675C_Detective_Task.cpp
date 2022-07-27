#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s;
	cin >> t;
	while (t --) {
		cin >> s;
		int l = 0, r = s.length() - 1;
		for (int i = l, j = r; j > -1; ++ i, -- j) {
			if (s[i] == '0' && r == s.length() - 1) r = i;
			if (s[j] == '1' && l == 0) l = j;
		}
		cout << r - l + 1 << endl;
	}
	return 0;
}