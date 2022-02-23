#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, c, r;
	while(cin >> t) {
		while(t --) {
			cin >> a >> b >> c >> r;
			int ans = abs(a - b), n1 = c + r, n2 = c - r;
			int mmax = max(a, b), mmin = min(a, b);
			if(n1 <= mmax && n2 >= mmin) ans -= 2 * r;
			else if(n1 > mmax && n2 < mmax) ans -= mmax - n2;
			else if(n2 < mmin && n1 > mmin) ans -= n1 - mmin;
			cout << max(ans, 0) << endl;
		}
	}
	return 0;
}
