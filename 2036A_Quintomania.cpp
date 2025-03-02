#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		int flg = 0;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int i = 1; i < n; ++i) {
			if (abs(a[i] - a[i - 1]) != 5 && abs(a[i] - a[i - 1]) != 7) {
				flg = 1;
				break;
			}
		}
		cout << (flg ? "NO" : "YES") << endl;
	}
	return 0;
}