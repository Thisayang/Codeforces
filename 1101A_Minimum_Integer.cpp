#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int q, l, r, d;
	cin >> q;
	while (q  --) {
		cin >> l >> r >> d;
		if (d < l || d > r) cout << d << endl;
		else {
			cout << r / d * d + d << endl;
		}
	}
	return 0;
}