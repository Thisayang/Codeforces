#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int n;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		string s[n];
		for (int i = 0; i < n; ++i) {
			cin >> s[i];
		}
		for (int i = 0; i < n; i += k) {
			for (int j = 0; j < n; j += k) {
				cout << s[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}