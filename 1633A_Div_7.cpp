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
		if (n % 7 == 0) cout << n << endl;
		else {
			for (int i = 0; i < 10; ++ i) {
				if ((n / 10 * 10 + i) % 7 == 0) {
					cout << n / 10 * 10 + i << endl;
					break;
				}
			}
		}
	}
	return 0;
}

