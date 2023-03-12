#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		string s, t = "", u = "";
		cin >> n >> s;
		int flg = 0;
		FOR(i, 0, n) {
			if (s[i] == '1') {
				if (i == 0) t += '2', u += '2';
				else if (flg == 0) {
					t += '0', u += '1';
					flg = 1;
				} else {
					t += '1', u += '0';
				}
			} else if (s[i] == '0') t += '0', u += '0';
			else {
				if (flg == 0) t += '1', u += '1';
				else t += '2', u += '0';
			}
		}
		cout << t << endl << u << endl;
	}
	return 0;
}