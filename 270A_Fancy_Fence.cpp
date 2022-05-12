#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, x[] = {60, 90, 108, 120, 135, 140, 144, 150, 156, 160, 162, 165, 168, 170, 171, 172, 174, 175, 176, 177, 178, 179};
	cin >> t;
	for (int i = 0; i < t; ++ i) {
		cin >> a;
		int flg = 0;
		for (int j = 0; j < 22; ++ j) {
			if (a < x[j]) break;
			else if (a == x[j]) {
				flg = 1;
				break;
			}
		}
		cout << (flg == 1 ? "YES" : "NO") << endl;
	}
	return 0;
}