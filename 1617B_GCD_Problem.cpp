#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		if (n % 2 == 0) cout << n / 2 << " " << n / 2 - 1 << " " << 1 << endl;
		else if ((n - 1) % 4 == 0) {
			cout << n / 2 - 1 << " " << n / 2 + 1 << " " << 1 << endl;
		} else {
			cout << n / 2 - 2 << " " << n / 2 + 2 << " " << 1 << endl;
		}
	}
	return 0;
}