#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, b, ans = 0;
	map<int, int> mp;
	cin >> n;
	for (int i = 1; i < n; ++ i) {
		cin >> a >> b;
		mp[a] ++;
		mp[b] ++;
	}
	for (auto it = mp.begin(); it != mp.end(); ++ it) {
		if (it -> second == 1) ans ++;
	}
	cout << ans << endl;
	return 0;
}