#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, c, sum;
	cin >> n;
	while (n --) {
		cin >> c >> sum;
		if (sum % c == 0) cout << c * (sum / c) * (sum / c) << endl;
		else cout << (sum % c) * (sum / c + 1) * (sum / c + 1) + (c - sum % c) * (sum / c) * (sum / c) << endl;
	}
	return 0;
}