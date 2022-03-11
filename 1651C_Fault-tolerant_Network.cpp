#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[200010], b[200010];
	cin >> t;
	while (t --) {
		cin >> n;
		memset(a, 0, sizeof(int) * 200010);
		memset(b, 0, sizeof(int) * 200010);
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		for (int i = 0; i < n; ++ i) {
			cin >> b[i];
		}
		ll minA = abs(a[0] - b[0]), minB = abs(a[n - 1] - b[0]);
		ll minC = minA, minD = abs(b[n - 1] - a[0]);
		for (int i = 1; i < n; ++ i) {
			if (minA > abs(a[0] - b[i])) {
				minA = abs(a[0] - b[i]);
			}
			if (minB > abs(a[n - 1] - b[i])) {
				minB = abs(a[n - 1] - b[i]);
			}
			if (minC > abs(b[0] - a[i])) {
				minC = abs(b[0] - a[i]);
			}
			if (minD > abs(b[n - 1] - a[i])) {
				minD = abs(b[n - 1] - a[i]);
			}
		}
		ll sum = minA + minB + minC + minD;
		if (sum > abs(a[0] - b[0]) + abs(a[n - 1] - b[n - 1])) {
			sum =  abs(a[0] - b[0]) + abs(a[n - 1] - b[n - 1]);
		}
		cout << sum << endl;
	}
	return 0;
}