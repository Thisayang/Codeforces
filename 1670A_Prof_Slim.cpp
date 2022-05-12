#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> a(100010);
	cin >> t;
	while (t --) {
		cin >> n;
		int cnt = 0, flg = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if (a[i] < 0) cnt ++;
		}
		for (int i = 0; i < n; ++ i) {
			if (cnt > 0) {
				if (a[i] > 0) a[i] *= -1;
				cnt --;
			} else {
				if (a[i] < 0) a[i] *= -1;
			}
		}
		for (int i = 1; i < n; ++ i) {
			if (a[i] < a[i - 1]) flg = 1;
		}
		cout << (flg == 1 ? "NO" : "YES") << endl;
	}
	return 0;
}