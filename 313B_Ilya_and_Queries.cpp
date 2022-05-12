#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	int m, l, r;
	vector<int> a(100010);
	cin >> s >> m;
	a[0] = 0;
	a[1] = 0;
	for (int i = 1; s[i] != 0; ++ i) {
		if (s[i] == s[i - 1]) a[i + 1] = 1;
		a[i + 1] += a[i];
	}
	for (int i = 0; i < m; ++ i) {
		cin >> l >> r;
		cout << a[r] - a[l] << endl;
	}
	return 0;
}