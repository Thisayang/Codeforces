#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int h;
	int m;
	int cnt = 12;
	cin >> t;
	while (t--) {
		int ans = 0;
		scanf("%d:%d", &h, &m);
		if (h >= cnt) {
			ans = 1;
		}
		if (h > cnt || h == 0) {
			h = (h + 24 - cnt) % 24;
		}
		cout << (h < 10 ? "0" : "") << h << ":" << (m < 10 ? "0" : "") << m << " " << (ans ? "PM" : "AM") << endl;
	}
	return 0;
}