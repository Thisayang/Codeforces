#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> a(300010);
	cin >> t;
	while (t --) {
		cin >> n;
		set<int> s;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			s.insert(a[i]);
		}
		for (int i = 1; i <= n; ++ i) {
			cout << (i > s.size() ? i : s.size()) << " ";
		}
		cout << endl;
	}
	return 0;
}