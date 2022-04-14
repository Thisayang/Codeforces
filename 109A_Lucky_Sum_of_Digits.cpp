#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	int flg = 0;
	for (int i = 0; 4 * i <= n; ++ i) {
		for (int j = 0; 4 * i + 7 * j <= n; ++ j) {
			if (4 * i + 7 * j == n) {
				flg = 1;
				for (int k = 0; k < i; ++ k) cout << '4';
				for (int k = 0; k < j; ++ k) cout << '7';
				goto loop;
			}
		}
	}
	loop: ;
	if (flg == 0) cout << -1;
	cout << endl;
	return 0;
}