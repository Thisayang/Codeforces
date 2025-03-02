#include <bits/stdc++.h>

using namespace std;

int solve(int a1, int a2 , int a4, int a5) {
	if (a4 == a1 + 2 * a2 && a5 == 2 * a1 + 3 * a2) {
		cout << 3 << endl;
	} else if (a5 == 2 * a4 - a2 || a4 == a1 + 2 * a2 || a5 == a1 + a2 + a4) {
		cout << 2 << endl;
	} else {
		cout << 1 << endl;
	}
	return 0;
}

int main(void) {
	int t;
	int a1;
	int a2;
	int a4;
	int a5;
	cin >> t;
	while (t--) {
		cin >> a1 >> a2 >> a4 >> a5;
		solve(a1, a2, a4, a5);
	}
	return 0;
}