#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, l, tmp;
	set<int> sett; 
	vector<int> a(100010), x(100010);
	cin >> m >> n;
	x[m + 1] = 0;
	for (int i = 0; i < m; ++ i) {
		cin >> x[i];
	}
	for (int i = m - 1; i >= 0; -- i) {
		if (sett.find(x[i]) == sett.end()) {
			sett.insert(x[i]);
			a[i + 1] = 1;
		} 
		a[i + 1] += a[i + 2];
	}
	for (int i = 0; i < n; ++ i) {
		cin >> l;
		cout << a[l] << endl;
	}
	return 0;
}