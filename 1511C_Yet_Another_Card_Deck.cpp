#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, q, tmp, a[60] = {0};
	set<int> sett;
	cin >> n >> q;
	for (int i = 0; i < n; ++ i) {
		cin >> tmp;
		if (sett.find(tmp) == sett.end()) {
			a[tmp] = i + 1;
			sett.insert(tmp);
		}
	}
	for (int i = 0; i < q; ++ i) {
		cin >> tmp;
		cout << a[tmp] << " ";
		for (int i = 1; i < 51; ++ i) {
			if (i == tmp) continue;
			else if (a[i] != 0 && a[i] < a[tmp]) a[i] ++;
		}
		a[tmp] = 1;
	}
	cout << endl;
	return 0;
}