#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k, h, m;
	while(cin >> k >> h >> m) {
		int ans = 0;
		while(h != 7 && h % 10 != 7 && m != 7 && m % 10 != 7) {
			m -= k;
			if(m < 0) {
				h --;
				m = (m + 60) % 60;
			}
			if(h < 0) h = (h + 24) % 24;
			ans ++;
		}
		cout << ans << endl;
	}
	return 0;
}
