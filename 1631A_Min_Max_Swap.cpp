#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, a[110], b[110];
	cin >> t;
	while (t --) {
		cin >> n;
		int maxA = -2e9, maxB = -2e9;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		for (int i = 0; i < n; ++ i) {
			cin >> b[i];
			if (a[i] < b[i]) {
				int tmp = a[i];
				a[i] = b[i];
				b[i] = tmp;
			}
		}
		for (int i = 0; i < n; ++ i) {
			if (maxB < b[i]) {
				maxB = b[i];
			}
			if (maxA < a[i]) {
				maxA = a[i];
			}
		}
		cout << maxA * maxB << endl;
	}
	return 0;
}
