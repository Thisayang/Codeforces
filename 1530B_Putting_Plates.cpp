#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, h, w;
	cin >> t;
	while (t --) {
		cin >> h >> w;
		int a[21][21] = {0};
		a[0][0] = 1;
		a[0][w - 1] = 1;
		a[h - 1][0] = 1;
		a[h - 1][w - 1] = 1;
		for (int i = 2; i < w - 1; i += 2) {
			if (a[0][i + 1] == 0) a[0][i] = 1;
			if (a[h - 1][i + 1] == 0) a[h - 1][i] = 1;
		}
		for (int i = 2; i < h - 1; i += 2) {
			if (a[i + 1][0] == 0) a[i][0] = 1;
			if (a[i + 1][w - 1] == 0) a[i][w - 1] = 1;
		}
		for (int i = 0; i < h; ++ i) {
			for (int j = 0; j < w; ++ j) {
				cout << a[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}