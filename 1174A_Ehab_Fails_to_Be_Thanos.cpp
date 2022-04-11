#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	vector <int> a(2010);
	cin >> n;
	set<int> sett;
	for (int i = 0; i < 2 * n; ++ i) {
		cin >> a[i];
		sett.insert(a[i]);
	}
	if (sett.size() == 1) cout << -1 << endl;
	else {
		sort(a.begin(), a.begin() + 2 * n);
		for (int i = 0; i < 2 * n; ++ i) {
			cout << a[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}