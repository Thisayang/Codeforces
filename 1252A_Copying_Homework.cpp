#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	vector<int> a(100010);
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
		if (a[i] == 1) cout << n << " ";
		else if (a[i] == n) cout << 1 << " ";
		else cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}