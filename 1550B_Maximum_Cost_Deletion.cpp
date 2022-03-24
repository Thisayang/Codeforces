#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a, b;
	cin >> t;
	while (t --) {
		cin >> n >> a >> b;
		string s;
		cin >> s;
		ll sum = n * a;
		if (b >= 0) {
			sum = sum + n * b;
		} else {
			int x = 1;
			for (int i = 1; i < n; ++ i) {
				if (s[i] != s[i - 1]) {
					x ++;
				}
			}
			sum = sum + (x / 2 + 1) * b;
		}
		cout << sum << endl;
	}
	return 0;
}