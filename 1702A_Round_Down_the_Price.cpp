#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, m;
	cin >> t;
	while (t --) {
		cin >> m;
		int tmp = 1;
		while (tmp <= m) tmp *= 10;
		tmp /= 10;
		cout << m - tmp << endl;
	}
	return 0;
}