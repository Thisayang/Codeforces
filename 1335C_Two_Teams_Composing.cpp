#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a;
	cin >> t;
	while (t --) {
		cin >> n;
		map<int, int> mp;
		set<int> sett;
		int mx = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a;
			sett.insert(a);
			mp[a] ++;
			mx = max(mx, mp[a]);
		}
		if (mx < sett.size()) cout << mx << endl;
		else if (mx > sett.size()) cout << sett.size() << endl;
		else cout << mx - 1 << endl;
	}
	return 0;
}