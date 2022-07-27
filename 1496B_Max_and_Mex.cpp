#include <bits/stdc++.h>
#define ll long long int
#define forn(i, a, n) for (int i = a; i < int(n); ++ i)
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	vector<int> a(100010);
	cin >> t;
	while (t --) {
		cin >> n >> k;
		set<int> sett;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			sett.insert(a[i]);
		}
		int cnt = 0, ans, flg = 0;
		while (k --) {
			while (sett.find(cnt) != sett.end()) {
				cnt ++;
			}
			if (cnt - *sett.rbegin() == 1) {
				ans = sett.size() + k + 1;
				flg = 1;
				break;
			}
			int tmp = cnt + *sett.rbegin();
			tmp = (tmp + 1) / 2;
			if (sett.find(tmp) == sett.end()) sett.insert(tmp);
			else {
				ans = sett.size();
				flg = 1;
				break;
			}
		}
		cout << (flg == 1 ? ans : sett.size()) << endl;
	}
	return 0;
}