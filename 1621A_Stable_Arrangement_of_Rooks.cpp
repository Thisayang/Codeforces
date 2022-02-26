#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, m, n;
	cin >> t;
	while (t --) {
		cin >> m >> n;
		if (((m + 1) / 2) < n) {
			cout << "-1" << endl;
		} else {
			int cnt = 0;
			for (int i = 0; i < m; ++ i) {
				for (int j = 0; j < m; ++ j) {
					if (i % 2 == 0 && i == j && cnt < n) {
						cout << "R";
						cnt ++;
					} else cout << ".";
				}
				cout << endl;
			}
		}
	}
	return 0;
}