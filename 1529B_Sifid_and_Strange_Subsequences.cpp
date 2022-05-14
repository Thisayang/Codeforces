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
		int mn = 1e9 + 10, cnt = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if (a[i] > 0) {
				mn = min(mn, a[i]);
			} else cnt ++;
		}
		if (n == 1 || cnt == 0) {
			cout << 1 << endl;
		} else if (mn == 1e9 + 10) {
			cout << cnt << endl;
		}else {
			sort(a.begin(), a.begin() + n);
			int tmp = 1e9 + 10;
			for (int i = 1; a[i] != mn; ++ i) {
				tmp = min(tmp, abs(a[i] - a[i - 1]));
			}
			if (tmp >= mn) cnt ++;
			cout << cnt << endl;
		}
	}
	return 0;
}