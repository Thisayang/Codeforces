#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		int a[n];
		int sum = 0;
		int cnt[3] = {0};
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			sum += a[i];
			cnt[a[i] % 3]++;
		}
		if (sum % 3 == 0) {
			cout << 0 << endl;
		} else if (sum % 3 == 2 || cnt[1] != 0) {
			cout << 1 << endl;
		} else {
			cout << 2 << endl;
		}
	}
	return 0;
}