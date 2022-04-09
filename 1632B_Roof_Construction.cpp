#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int k = 1;
		while (k < n) k <<= 1;
		k >>= 1;
		for (int i = 1; i < k; ++ i) cout << i << " ";
		cout << 0;
		for (int i = k; i < n; ++ i) cout << " " << i;
		cout << endl;
	}
	return 0;
}