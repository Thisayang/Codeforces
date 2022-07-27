#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, q, x, y;
	vector<ll> p(200010), s(200010, 0);
	cin >> n >> q;
	for (int i = 0; i < n; ++ i) {
		cin >> p[i];
	}
	sort(p.begin(), p.begin() + n);
	for (int i = 0; i < n; ++ i) {
		s[i + 1] = p[i] + s[i];
	}
	for (int i = 0; i < q; ++ i) {
		cin >> x >> y;
		cout << s[n - x + y] - s[n - x] << endl;
	}
	return 0;
}