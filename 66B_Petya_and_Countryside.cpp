#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[1010];
	cin >> n;
	FOR(i, 0, n) {
		cin >> a[i];
	}
	int ans, mx = 1, cnt = 1;
	FOR(i, 0, n) {
		ROF(j, i - 1, -1) {
			if (a[j] <= a[j + 1]) cnt ++;
			else break;
		}
		FOR(j, i + 1, n) {
			if (a[j] <= a[j - 1]) cnt ++;
			else {
				i = j - 1;
				break;
			}
		}
		mx = max(mx, cnt);
		cnt = 1;
	}
	cout << mx << endl;
	return 0;
}