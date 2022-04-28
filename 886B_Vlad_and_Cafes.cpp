#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans = 0;
	vector<int> a(200010);
	set<int> sett;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	for (int i = n - 1; i >= 0; -- i) {
		if (sett.find(a[i]) == sett.end()) {
			sett.insert(a[i]);
			ans = a[i];
		}
	}
	cout << ans << endl;
	return 0;
}