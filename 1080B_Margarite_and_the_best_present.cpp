#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int q, l, r;
	while(cin >> q) {
		while(q --) {
			int ans = 0;
			cin >> l >> r;
			if(l & 1) ans = (r - l + 1) / 2;
			else ans = (r - l + 1) / 2 * -1;
			if((r - l + 1) % 2 == 1) {
				if(r & 1) r *= -1;
				ans += r;
			} 
			cout << ans << endl;
		}
	}
	return 0;
}
