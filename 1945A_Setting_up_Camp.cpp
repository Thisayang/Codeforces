#include <bits/stdc++.h>

using namespace std;

int Solve(int a, int b, int c) {
	if (b % 3 != 0 && b % 3 + c < 3) {
		cout << -1 << endl;
		return 0;
	}
	cout << a + b / 3 + (b % 3 + c + 2) / 3 << endl;
	return 0;
}

int main(void) {
	int t;
	int a;
	int b;
	int c;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;
		Solve(a, b, c);
	}
	return 0;
}