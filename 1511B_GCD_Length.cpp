#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, c;
	cin >> t;
	while (t --) {
		cin >> a >> b >> c;
		cout << 1;
		for (int i = 0; i < a - 1; ++ i) {
			cout << '0';
		}
		cout << " ";
		for (int i = 0; i < b - c + 1; ++ i) {
			cout << '1';
		}
		for (int i = 0; i < c - 1; ++ i) {
			cout << '0';
		}
		cout << endl;
	}
	return 0;
}