#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int a[110] = {0}, b[110] = {0};
		int sum = 0, sub = 0;
		queue <int> s, r;
		for (int i = 1; i <= n; ++ i) {
			cin >> a[i];
		}
		for (int i = 1; i <= n; ++ i) {
			cin >> b[i];
			if (a[i] > b[i]) {
				sum += a[i] - b[i];
				s.push(i);
			} else if (a[i] < b[i]) {
				sub += b[i] - a[i];
				r.push(i);
			}
		}
		if (sum != sub) {
			cout << -1 << endl;
		} else {
			if (sum == 0) {
				cout << 0 << endl;
			} else {
				cout << sum << endl;
				while (!s.empty()) {
					int x1 = s.front(), x2 = r.front();
					cout << x1 << " ";
					a[x1] --;
					if (a[x1] == b[x1]) s.pop();
					cout << x2 << endl;
					a[x2] ++;
					if (a[x2] == b[x2]) r.pop();
				}
			}
		}
	}
	return 0;
}