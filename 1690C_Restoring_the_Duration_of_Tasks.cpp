#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> a(200010), b(200010);
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		for (int i = 0; i < n; ++ i) {
			cin >> b[i];
			if (i == 0 || b[i - 1] < a[i]) cout << b[i] - a[i] << " ";
			else if (b[i - 1] >= a[i]) cout << b[i] - b[i - 1] << " ";
		}
		cout << endl;
	}
	return 0;
}