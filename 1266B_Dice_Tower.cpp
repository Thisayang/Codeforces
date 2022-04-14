#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, tmp;
	cin >> n;
	while (n --) {
		cin >> tmp;
		if (tmp > 14 && tmp % 14 < 7 && tmp % 14 != 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}