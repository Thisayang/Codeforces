#include <bits/stdc++.h>
#define ll long long int
#define forn(i, a, n) for (int i = a; i < int(n); ++ i)
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110], mx = 0;
	cin >> n;
	map<int, int> mp;
	forn(i, 0, n) {
		cin >> a[i];
		mp[a[i]] ++;
		mx = max(mx, mp[a[i]]);
	}
	if (mx > n / 2 && n % 2 == 0) cout << "NO" << endl;
	else if (mx > n / 2 + 1 && n % 2 == 1) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}