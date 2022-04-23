#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, flg = 0, a, b;
	string s;
	cin >> n >> s;
	for (int i = 1; i < n; ++ i) {
		if (s[i] < s[i - 1]) {
			a = i;
			b = i + 1;
			flg = 1;
			break;
		}
	}
	if (flg == 0) cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		cout << a << " " << b << endl;
	}
	return 0;
}