#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s;
	vector<int> a(200010);
	cin >> n >> s;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	int mn = 1e9 + 1;
	for (int i = 1; i < n; ++ i) {
		if ((s[i] == 'L' && s[i - 1] == 'R') || (s[i] == 'R' && s[i] == 'L')) {
			mn = min(mn, (a[i] - a[i - 1]) / 2);
		}
	}
	if (mn == 1e9 + 1) cout << -1 << endl;
	else cout << mn << endl;
	return 0;
}