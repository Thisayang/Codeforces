#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int solve (int a, int b) {
	int x = 0;
	while (a != 0) {
		a /= b;
		x ++;
	}
	return x;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b;
	while (cin >> t) {
		while (t --) {
			cin >> a >> b;
            if (a < b) cout << 1 << endl;
            else if (a == b) cout << 2 << endl;
            else {
				int cnt = 0, ans = 1e9 + 7;
				if (b == 1) {
					cnt = 1;
					b = 2;
				} 
				while (true) {
					int n = solve(a, b);
					int tmp = cnt + n;
					if (tmp < ans) {
						ans = tmp;
					}
					cnt ++;
					b ++;
					if (ans <= cnt) {
						break;
					}
				}
				cout << ans << endl;
            }
        }
	}
	return 0;
}
