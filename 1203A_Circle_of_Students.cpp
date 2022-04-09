#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int q, n;
	cin >> q;
	while (q --) {
		cin >> n;
		vector <int> a(n);
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		int cnt = 0;
		for (int i = 0; i < n - 1; ++ i) {
			if (abs(a[i] - a[i + 1]) > 1) {
				cnt ++;
			}
		}
		if (abs(a[n - 1] - a[0]) > 1) cnt ++;
		cout << (cnt > 1 ? "NO" : "YES") << endl;
	}
	return 0;
}