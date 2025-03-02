#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < 2 * n; ++i) {
			for (int j = 0; j < 2 * n; ++j) {
				if ((i % 4 < 2 && j % 4 < 2) || (i % 4 >= 2 && j % 4 >= 2)) {
					cout << '#';
				} else {
					cout << '.';
				}
			}
			cout << endl;
		}
	}
}