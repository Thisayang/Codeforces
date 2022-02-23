#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, x, b, y;
	while(cin >> n >> a >> x >> b >> y) {
		bool flg = 0;
		while(a != x % n && b != y % n) {
			a = (a + 1) % n;
			b = (b - 1 + n) % n;
			if(a == b) {
				flg = 1;
				break;
			}
		}
		if(flg) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
