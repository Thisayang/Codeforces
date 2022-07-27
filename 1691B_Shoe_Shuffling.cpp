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
		map<int, int> mp;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			mp[a[i]] ++;
		}
		int flg = 0;
		for (auto it = mp.begin(); it != mp.end(); ++ it) {
			if (it -> second == 1) flg = 1;
		}
		if (flg == 1) cout << -1 << endl;
		else {
			int cnt = 0;
			for (auto it = mp.begin(); it != mp.end(); ++ it) {
				for (int i = 2; i <= it -> second; ++ i) {
					cout << cnt + i << " ";
				}
				cout << cnt + 1 << " ";
				cnt += it -> second;
			}
			cout << endl;
		}
	}
	return 0;
}