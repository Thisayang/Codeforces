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
		for (int i = 1; i <= n; ++ i) {
			cout << i << " ";
			for (int j = n; j > 0; -- j) {
				if (j != i) cout << j << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
