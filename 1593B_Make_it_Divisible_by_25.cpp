#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, m, x;
	cin >> t;
	while (t --) {
		cin >> n;
		x = n, m = n;
		if (n % 25 == 0) {
			cout << 0 << endl;
		} else {
			int cnt1 = 0, cnt2 = 0;
			while (m % 10 != 0 && m > 0) {
				cnt1 ++;
				m /= 10;
			} 
			while (m >= 50 && m % 100 != 0 && m % 100 != 50) {
				cnt1 ++;
				m = m / 100 * 10;
			}
			while (x % 10 != 5 && x > 0) {
				cnt2 ++;
				x /= 10;
			} 
			while (x >= 75 && x % 100 != 25 && x % 100 != 75) {
				cnt2 ++;
				x = x / 100 * 10 + 5;
			}
			cout << (cnt1 < cnt2 ? cnt1 : cnt2) << endl;
		}
	}
	return 0;
}