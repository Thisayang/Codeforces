#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b;
	cin >> t;
	while (t --) {
		cin >> a >> b;
		if (a == 0) cout << 1 << endl;
		else if (b == 0) cout << a + 1 << endl;
		else {
			cout << b * 2 + a + 1 << endl;
		}
	}
	return 0;
}