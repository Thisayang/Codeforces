#include <bits/stdc++.h>

using namespace std;

int solve(int m, int a , int b, int c) {
	int asum = min(a, m);
	int bsum = min(b, m);
	int csum = min(c, 2 * m - asum - bsum);
	cout << asum + bsum + csum << endl;
	return 0;
}

int main(void) {
	int t;
	int m;
	int a;
	int b;
	int c;
	cin >> t;
	while (t--) {
		cin >> m >> a >> b >> c;
		solve(m, a, b, c);
	}
	return 0;
}