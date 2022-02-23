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
		int num = n, flg = 0;
		while (num > 0) {
			if (num < 10 && num % 2 == 0) {
				flg = 2;
			} else if (num % 2 == 0) {
				flg = 1;
			}
			num /= 10;
		}
		if (n % 2 == 0) cout << 0 << endl;
		else if (flg == 0) cout << -1 << endl;
		else if (flg == 2) cout << 1 << endl;
		else cout << 2 << endl;
	}
	return 0;
}
