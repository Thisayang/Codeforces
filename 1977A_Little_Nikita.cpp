#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int n;
	int m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		if (n < m || (n - m) % 2 != 0) {
			cout << "No" << endl;
		} else {
			cout << "Yes" << endl;
		}
	}
	return 0;
}