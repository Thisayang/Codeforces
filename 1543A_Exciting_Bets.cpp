#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	long long t, a, b;
	cin >> t;
	while(t --) {
		cin >> a >> b;
		if(a == b) cout << 0 << ' ' << 0 << endl;
		else {
			long long ans = abs(a - b);
			long long Min = min(a % ans, ans - a % ans);
			cout << ans << ' ' << Min << endl;
		}
	}
	return 0;
}