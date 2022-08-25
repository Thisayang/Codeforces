#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	cin >> n >> k;
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
	}
	for (int i = k - 1;  ; ++ i) {
		if (a[i % n] == 1) {
			cout << (i % n) + 1 << endl;
			break;
		}
	}
	return 0;
}