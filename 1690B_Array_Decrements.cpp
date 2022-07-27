#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> a(50010), b(50010);
	cin >> t;
	while (t --) {
		cin >> n;
		int flg = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		int cnt = -1;
		set<int> sett, sett1;
		for (int i = 0; i < n; ++ i) {
			cin >> b[i];
			if (a[i] < b[i]) flg = 1;
			else {
				if (b[i] == 0) sett1.insert(a[i]);
				else sett.insert(a[i] - b[i]);
			}
		}
		if (sett.size() > 1) flg = 1;
		else if (sett.size() == 1) {
			for (auto it = sett1.begin(); it != sett1.end(); ++ it) {
				if (*it > *sett.begin()) flg = 1;
			}
		}
		cout << (flg == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}