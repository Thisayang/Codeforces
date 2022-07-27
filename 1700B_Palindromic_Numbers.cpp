#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while (t --) {
		cin >> n >> s;
		vector<int> a(n);
		FOR(i, 0, n) {
			a[i] = '9' - s[i];
		}
		if (a[0] == 0) {
			a[n - 1] ++;
			ROF(i, n - 1, -1) {
				a[i] ++;
				if (a[i] >= 10) {
					a[i] -= 10;
					a[i - 1] ++;
				}
			}
		}
		FOR(i, 0, n) cout << a[i];
		cout << endl;
	}
	return 0;
}