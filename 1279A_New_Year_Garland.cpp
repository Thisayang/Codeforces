#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, r, g, b;
	while(cin >> t) {
		while(t --) {
			cin >> r >> g >> b;
			int sum = r + g + b;
			int mmax = max(r, max(g, b));
			if(2 * mmax - sum > 1) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
	return 0;
}
