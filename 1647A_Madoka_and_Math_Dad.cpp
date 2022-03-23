#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int cnt = n / 3;
		if (n % 3 == 1) {
			cout << "1";
		}
		for (int i = 0; i < cnt; ++ i) {
			cout << "21";
		}
		if (n % 3 == 2) {
			cout << "2";
		}
		cout << endl;
	}
	return 0;
}