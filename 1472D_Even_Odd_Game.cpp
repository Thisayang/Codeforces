#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, tmp;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<ll> o, e;
		FOR(i, 0, n) {
			cin >> tmp;
			if (tmp & 1) o.push_back(tmp);
			else e.push_back(tmp);
		}
		sort(o.begin(), o.end());
		sort(e.begin(), e.end());
		ll l1 = e.size(), l2 = o.size(), sum1 = 0, sum2 = 0;
		FOR(i, 0, n) {
			if (i % 2 == 0) {
				if (l1 == 0 || (l2 >= 1 && e[l1 - 1] < o[l2 - 1])) {
					l2 --;
				} else {
					sum1 += e[l1 - 1];
					l1 --;
				}
			} else {
				if (l2 == 0 || (l1 >= 1 && o[l2 - 1] < e[l1 - 1])) {
					l1 --;
				} else {
					sum2 += o[l2 - 1];
					l2 --;
				}
			}
		}
		if (sum1 > sum2) cout << "Alice" << endl;
		else if (sum1 < sum2) cout << "Bob" << endl;
		else cout << "Tie" << endl;
	}
	return 0;
}