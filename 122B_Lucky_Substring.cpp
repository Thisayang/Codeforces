#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	int a[10] = {0}, mx = 0;
	for (int i = 0; s[i] != 0; ++ i) {
		a[s[i] - '0'] ++;
		mx = max(mx, a[s[i] - '0']);
	}
	if (a[4] >= a[7] && a[4] > 0) cout << 4 << endl;
	else if (a[4] <= a[7] && a[7] > 0) cout << 7 << endl;
	else cout << -1 << endl;
	return 0;
}