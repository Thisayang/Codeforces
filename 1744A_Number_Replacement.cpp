#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		string s;
		vector<int> flg(50, -1);
		int res = 0;
		cin >> s;
		for (int i = 0; i < n; ++i) {
			if (flg[a[i] - 1] == -1) {
				flg[a[i] - 1] = s[i] - 'a';
			} else {
				if (flg[a[i] - 1] != s[i] - 'a') {
					res = 1;
					break;
				}
			}
		}
		if (res == 1) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
	return 0;
}