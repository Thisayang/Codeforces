#include <bits/stdc++.h>

using namespace std;

int Solve(int n) {
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int ans = max(a[0], a[1]) - 1;
	for (int i = 2; i < n; ++i) {
		ans = min(ans, max(a[i], a[i - 1]) - 1);
	}
	return ans;
}
 
int main(void) {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << Solve(n) << endl;
	}
	return 0;
}