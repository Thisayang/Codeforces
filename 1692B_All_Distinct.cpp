#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[60];
	cin >> t;
	while (t --) {
		cin >> n;
		set<int> sett;
		int cnt = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if (sett.find(a[i]) == sett.end()) {
				sett.insert(a[i]);
			} else {
				cnt ++;
			}
		}
		cout << sett.size() - (cnt % 2) << endl;
	}
	return 0;
}