#include <bits/stdc++.h>

using namespace std;

void Solve(int n) {
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);
	int cnt = 1;
	for (int i = 0; i < n; ++i) {
		int tmp = 1;
		for (int j = i + 1; j < n; ++j) {
			if (a[i] == a[j]) {
				++tmp;
			} else {
				i = j - 1;
				break;
			}
		}
		cnt = max(tmp, cnt);
	}
	cout << n - cnt << endl;
	return ;
}

int main(void) {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		Solve(n);
	}
	return 0;
}