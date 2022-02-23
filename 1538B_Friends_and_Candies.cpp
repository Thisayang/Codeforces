#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, a;
	cin >> t;
	while(t --) {
		cin >> n;
		map<int, int> m;
		ll sum = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a;
			sum += a;
			if(m.find(a) == m.end()) m[a] = 1;
			else m[a] ++;
		}
		if(sum % n != 0) cout << -1 << endl;
		else {
			int ans = 0;
			for(auto it = m.begin(); it != m.end(); ++ it) {
				if((*it).first > sum / n) ans += (*it).second;
			}
			cout << ans << endl;
		}
	}
	return 0;
}
