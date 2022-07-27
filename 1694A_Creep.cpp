#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b;
	cin >> t;
	while (t --) {
		cin >> a >> b;
		if (a <= b) {
			for (int i = 0; i < a; ++ i) cout << "10";
			for (int i = 0; i < b - a; ++ i) cout << '1';
			cout << endl;
		} else {
			for (int i = 0; i < b; ++ i) cout << "01";
			for (int i = 0; i < a - b; ++ i) cout << '0';
			cout << endl;
		}
	}
	return 0;
}