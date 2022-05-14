#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int  t, n, a[60];
	cin >> t;
	while (t --) {
		cin >> n;
		queue<int> q;
		set<int> sett;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			while (a[i] > n || (sett.find(a[i]) != sett.end() && a[i] > 1)) {
				a[i] /= 2;
			}
			sett.insert(a[i]);
		}
		sort(a, a + n);
		sett.clear();
		for (int i = 0; i < n; ++ i) {
			if (a[i] == i + 1) {
				sett.insert(i + 1);
			} else {
				while (a[i] > i + 1) {
					a[i] /= 2;
				}
				if (a[i] == i + 1) {
					sett.insert(i + 1);
				}
			}
		}
		cout << (sett.size() == n ? "YES" : "NO") << endl;
	}
	return 0;
}