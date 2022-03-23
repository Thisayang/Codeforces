#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a, b;
	cin >> t;
	while (t --) {
		cin >> n >> a >> b;
		vector<int> p;
		p.push_back(a);
		for (int i = n; i >= 1; -- i) {
			if (i != a && i != b) {
				p.push_back(i);
			}
		}
		p.push_back(b);
		if (*min_element(p.begin(), p.begin() + n / 2) == a &&
			*max_element(p.begin() + n / 2, p.end()) == b) {
				for (int x : p) cout << x << ' ';
		} else cout << -1;
		cout << endl;
	}
	return 0;
}