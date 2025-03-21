#include <bits/stdc++.h>

using namespace std;

int Solve(int x1, int y1, int x2, int y2) {
	if ((x1 >= y1 && x2 <= y2) || (x1 <= y1 && x2 >= y2)) {
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	return 0;
}

int main(void) {
	int t;
	int x1;
	int y1;
	int x2;
	int y2;
	cin >> t;
	while (t--) {
		cin >> x1 >> y1 >> x2 >> y2;
		Solve(x1, y1, x2, y2);
	}
	return 0;
}