#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int cnt = int(sqrt(n)), i = 1, x = 0, num = 1;
		if (cnt * cnt < n) cnt ++;
		while (num < cnt) {
			x += 2;
			i += x;
			num ++;
		}
		if (n < i) cout << cnt - (i - n) << " " << cnt << endl;
		else cout << cnt << " " << cnt - (n - i) << endl;
	}
	return 0;
}
