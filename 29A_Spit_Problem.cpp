#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x, y, flg = 0;
	map<pair<int, int>, int> mp;
	pair<int, int> p;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> x >> y;
		y = x + y;
		if (x < y) p.first = x, p.second = y;
		else p.first = y, p.second = x;
		if (mp.count(p) == 0) {
			mp[p] =  1;
		} else flg = 1;
	}
	cout << (flg == 1 ? "YES" : "NO") << endl;
	return 0;
}