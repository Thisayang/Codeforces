#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		int flg = 0;
		for (int i = 1; i < n; ++ i) {
			if (a[i] == a[i - 1]) {
				flg = 1;
				break;
			}
		}
		cout << (flg == 1 ? "YES" : "NO") << endl;
	}
	return 0;
}