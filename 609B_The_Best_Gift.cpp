#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, tmp, sum = 0;
	map<int, int> mp;
	cin >> n >> m;
	FOR(i, 0, n) {
		cin >> tmp;
		mp[tmp] ++;
	}
	for (auto it = mp.begin(); it != mp.end(); ++ it) {
		sum += it->second * (n - it->second);
		n -= it->second;
	}
	cout << sum << endl;
	return 0;
}