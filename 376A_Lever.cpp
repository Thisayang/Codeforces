#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	ll l = s.length(), m, sl = 0, sr = 0;
	for(int i = 0; i < l; ++ i) {
		if(s[i] == '^') {
			m = i;
			break;
		}
	}
	for(ll i = m - 1, j = m + 1; i >= 0 || j < l; -- i, ++ j) {
		if(i >= 0) {
			if(s[i] >= '0' && s[i] <= '9') sl += (s[i] - '0') * (m - i);
		}
		if(j < l) {
			if(s[j] >= '0' && s[j] <= '9') sr += (s[j] - '0') * (j - m);
		}
	}
	if(sl == sr) cout << "balance" << endl;
	else if(sl > sr) cout << "left" << endl;
	else cout << "right" << endl;
	return 0;
}
