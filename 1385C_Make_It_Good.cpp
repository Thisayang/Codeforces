#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int flg = 0;
		vector<int> a(n);
		FOR(i, 0, n) {
			cin >> a[i];
		}
		int pos = n - 1;
		while (pos > 0 && a[pos - 1] >= a[pos]) pos --;
		while (pos > 0 && a[pos - 1] <= a[pos]) pos --;
		cout << pos << endl;
	}
	return 0;
}