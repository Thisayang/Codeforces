#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, l1, r1, l2, r2;
	cin >> t;
	while (t --) {
		cin >> l1 >> r1 >> l2 >> r2;
		if (r1 >= l2 && l1 <= l2) cout << l2 << endl;
		else if (r2 >= l1 && l2 <= l1) cout << l1 << endl;
		else cout << l1 + l2 << endl;
	}
	return 0;
}