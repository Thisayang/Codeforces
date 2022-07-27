#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, k;
	string s, x;
	cin >> t;
	while (t --) {
		cin >> n >> m >> k;
		cin >> s >> x;
		sort(s.begin(), s.end());
		sort(x.begin(), x.end());
		string y = "";
		int a = 0, b = 0, c1 = 0, c2 = 0;
		while (a < n && b < m) {
			if (s[a] <= x[b]) {
				c1 ++;
				c2 = 0;
				if (c1 > k) {
					y += x[b ++];
					c1 = 0;
					c2 = 1;
				} else y += s[a ++];
			} else if (s[a] > x[b]) {
				c2 ++;
				c1 = 0;
				if (c2 > k) {
					y += s[a ++];
					c1 = 1;
					c2 = 0;
				} else y += x[b ++];
			}
		}
		cout << y << endl;
	}
	return 0;
}