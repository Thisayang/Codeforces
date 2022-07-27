#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, hc, dc, hm, dm, k, w, a;
	cin >> t;
	while (t --) {
		cin >> hc >> dc >> hm >> dm;
		cin >> k >> w >> a;
		int flg = 0;
		for (int i = 0; i <= k; ++ i) {
			ll nhc = hc + a * i;
			ll ndc = dc + (k - i) * w;
			ll cnt1 = (nhc + dm - 1) / dm;
			ll cnt2 = (hm + ndc - 1) / ndc;
			if (cnt1 >= cnt2) {
				cout << "YES" << endl;
				flg = 1;
				break;
			}
		}
		if (flg == 0) cout << "NO" << endl;
	}
	return 0;
}