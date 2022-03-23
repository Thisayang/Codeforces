#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, p1, p2, x1, x2;
	cin >> t;
	while (t --) {
		cin >> x1 >> p1 >> x2 >> p2;
		ll mn = min(p1, p2);
		p1 -= mn;
		p2 -= mn;
		if (p1 >= 7) {
			cout << ">" << endl;
		} else if (p2 >= 7) {
			cout << "<" << endl;
		} else {
			for (int i = 0; i < p1; ++i) x1 *= 10;
			for (int i = 0; i < p2; ++i) x2 *= 10;
			if (x1 < x2) cout << "<" << endl;
			else if (x1 > x2) cout << ">" << endl;
			else cout << "=" << endl;
		}
	}
	return 0;
}