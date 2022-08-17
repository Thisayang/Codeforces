#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int flg = n;
		vector<int> a(n + 1);
		map<int, int> mp, mpp;
		int mxv = 0;
		FOR(i, 1, n + 1) {
			cin >> a[i];
			if(i != 1) {
				if (mp[a[i]] && a[i] != a[i - 1]) mxv = max(mxv, i);
			}
			mp[a[i]] = 1;
		}
		ROF(i, n, mxv + 1) {
			if (a[i] < a[i - 1]) {
				mxv = i - 1;
				break;
			}
		}
		int res = 0;
		FOR(i, 1, mxv + 1) {
			if (!mpp[a[i]]) res ++;
			mpp[a[i]] = 1;
		}
		cout << res << endl;
	}
	return 0;
}