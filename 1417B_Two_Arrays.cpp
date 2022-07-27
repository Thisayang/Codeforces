#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n;
	cin >> t;
	while (t --) {
		double T, tmp;
		cin >> n >> T;
		int cnt = 0;
		FOR(i, 0, n) {
			cin >> tmp;
			if (tmp > T / 2.0) cout << 1 << " ";
			else if (tmp < T / 2.0) cout << 0 << " ";
			else {
				cout << (cnt & 1) << " ";
				cnt ++;
			}
		}
		cout << endl;
	}
	return 0;
}