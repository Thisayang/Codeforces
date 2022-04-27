#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110], b[110];
	cin >> n;
	map<int, int> x, y;
	set<int> sett;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
		x[a[i]] ++;
		sett.insert(a[i]);
	}
	for (int i = 0; i < n; ++ i) {
		cin >> b[i];
		y[b[i]] ++;
		sett.insert(b[i]);
	}
	int ans = 0, flg = 0;
	for (auto it = sett.begin(); it != sett.end(); ++ it) {
		if ((x[*it] + y[*it]) % 2 == 1) {
			flg = 1;
		} else {
			ans += abs(x[*it] - y[*it]) / 2;
		}
	}
	cout << (flg == 1 ? -1 : ans / 2) << endl;
	return 0;
}