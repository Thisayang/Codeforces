#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		string x[n];
		for (int i = 0; i < n; ++i) {
			cin >> x[i];
		}
		for (int i = n - 1; i >= 0; --i) {
			for (int j = 0; j < 4; ++j) {
				if (x[i][j] == '#') {
					cout << j + 1 << " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}