#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, b, x, y;
	cin >> t;
	while (t --) {
		cin >> n >> b >> x >> y;
		ll sum = 0, add = 0;
		for (int i = 0; i < n; ++ i) {
			if (add + x > b) add -= y;
			else add += x;
			sum += add;
		}
		cout << sum << endl;
	}
	return 0;
}