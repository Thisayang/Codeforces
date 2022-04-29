#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, ans = 0;
	map<int, int> mp;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a;
		mp[a] ++;
	}
	for (auto it = mp.begin(); it != mp.end(); ++ it) {
		ans += (*it). second / 2;
	}
	cout << ans / 2 << endl;
	return 0;
}