#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll k, l, cnt = 0, flg = 0;
	cin >> k >> l;
	while (l >= k) {
		if (l % k != 0) {
			break;
		} 
		if (l == k) {
			flg = 1;
			break;
		}
		l /= k;
		cnt ++;
		if (l == k || l == 1) flg = 1;
	}
	if (flg == 0) cout << "NO" << endl;
	else {
		cout << "YES" << endl << cnt << endl;
	}
	return 0;
}