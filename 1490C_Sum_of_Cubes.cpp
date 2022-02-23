#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, x, a[10010] = {0};
	map<ll, ll> mp;
	for(ll i = 1; i < 10001; ++ i) mp[i * i * i] = 1;
	cin >> t;
	while(t --) {
		cin >> x;
		bool flg = 0;
		for(ll i = 1; i < 10001; ++ i) {
			ll tmp = i * i * i;
			if(mp.find(x - tmp) != mp.end()) {
				flg = 1;
				break;
			}
		}
		cout << (flg == 1 ? "YES" : "NO") << endl;
	}
	return 0;
}
