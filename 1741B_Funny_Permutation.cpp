#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	int n;
	cin >> t;
	while(t--) {
		cin >> n;
		if (n == 3) {
			cout << "-1" << endl;
		} else if (n & 1) {
			for (int i = n - 1; i > 3; i -= 2) {
				cout << i << " " << i + 1 << " ";
			}
			cout << "1 2 3" << endl;
		} else {
			for (int i = n; i > 0; i -= 2) {
				cout << i << " " << i - 1 << " ";
			}
			cout << endl;
		}
	}
	return 0;
}