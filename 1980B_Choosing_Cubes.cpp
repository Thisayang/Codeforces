#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main(void) {
	int t;
	int n;
	int f;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> f >> k;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		int tmp = a[f - 1];
		sort(a, a + n, cmp);
		if (k == n) {
			cout << "YES" << endl;
		} else {
			if (a[k] < tmp) {
				cout << "YES" << endl;
			} else if (a[k - 1] == tmp && a[k] == tmp) {
				cout << "MAYBE" << endl;
			} else if (a[k] >= tmp) {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}