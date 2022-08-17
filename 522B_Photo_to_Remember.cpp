#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, wd = 0, fh = 0, sh = 0, ht, cnt = 0;
	cin >> n;
	vector<int> w(n), h(n);
	map<int, int> mp;
	FOR(i, 0, n) {
		cin >> w[i] >> h[i];
		wd += w[i];
		mp[h[i]] ++;
	}
	for (auto it = mp.rbegin(); it != mp.rend(); ++ it) {
		if (cnt == 0) {
			fh = it->first;
			if (it->second > 1)  {
				sh = fh; 
				break;
			}
		} else {
			sh = it->first;
			break;
		}
		cnt ++;
	}
	FOR(i, 0, n) {
		if (h[i] == fh) ht = sh;
		else ht = fh;
		cout << (wd - w[i]) * ht << " "; 
	}
	cout << endl;
	return 0;
}