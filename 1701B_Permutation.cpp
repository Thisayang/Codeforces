#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<int> a(n + 1, 0);
		cout << 2 << endl;
		for (int i = 1; i <= n; ++ i) {
			if (a[i] == 1) continue;
			for (int j = i; j <= n; j *= 2) {
				if (a[j] == 0) {
					cout << j << " ";
					a[j] = 1;
				}
			}
		}
		cout << endl;
	}
	return 0;
}