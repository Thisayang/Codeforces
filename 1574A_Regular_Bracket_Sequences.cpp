#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 1; i <= n; ++ i) {
			for (int j = 0; j < i; ++ j) {
				cout << "(";
			}
			for (int j = 0; j < i; ++ j) {
				cout << ")";
			}
			for (int j = n - i; j > 0; -- j) {
				cout << "()";
			}
			cout << endl;
		}
	}
	return 0;
}