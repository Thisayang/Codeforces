#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	if (n % 2 == 1) cout << (n + 1) / 2 << endl;
	else if (n != 0) cout << n + 1 << endl;
	else cout << 0 << endl;
	return 0;
}