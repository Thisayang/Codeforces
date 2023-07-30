#include <bits/stdc++.h>
#define N 3
using namespace std;

int Solve(void)
{
	char a[N][N] = {0};
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < N; ++i) {
		if (a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] !='.') {
			cout << a[i][0] << endl;
			return 0;
		}
		if (a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[0][i] != '.') {
			cout << a[0][i] << endl;
			return 0;
		}
	}
	if (a[1][1] != '.' && ((a[0][0] == a[1][1] && a[1][1] == a[2][2]) ||
		(a[2][0] == a[1][1] && a[1][1] == a[0][2]))) {
			cout << a[1][1] << endl;
			return 0;
	}
	cout << "DRAW" << endl;
	return 0;
}

int main(void)
{
	int t;
	cin >> t;
	while (t --) {
		Solve();
	}
	return 0;
}