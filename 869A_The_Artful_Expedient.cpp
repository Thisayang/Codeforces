#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	FOR(i, 0, n) {
		cin >> a[i];
	}
	FOR(i, 0, n) {
		cin >> b[i];
	}
	cout << "Karen" << endl;
	return 0;
}