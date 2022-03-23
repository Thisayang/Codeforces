#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> a(200010);
	cin >> t;
	while (t --) {
		cin >> n;
		int max = 0, cnt = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if (max < a[i]) max = a[i];
		}
		for (int i = n - 2, flg = a[n - 1]; flg < max && i > -1; -- i) {
			if (a[i] > flg) {
				++ cnt;
				flg = a[i];
			}
		}
		cout << cnt << endl;
	}
	return 0;
}