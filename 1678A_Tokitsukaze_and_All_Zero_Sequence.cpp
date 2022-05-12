#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[110];
	cin >> t;
	while (t --) {
		cin >> n;
		int cnt = 0;
		set<int> sett;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if (a[i] == 0) cnt ++;
			sett.insert(a[i]);
		}
		if (cnt != 0) {
			cout << n - cnt << endl;
		} else if (sett.size() < n) {
			cout << n << endl;
		} else cout << n + 1 << endl;
	}
	return 0;
}