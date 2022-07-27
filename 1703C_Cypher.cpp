#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[110];
	cin >> t;
	while (t --) {
		cin >> n;
		FOR(i, 0, n) {
			cin >> a[i];
		}
		int x;
		string s;
		FOR(i, 0, n) {
			cin >> x >> s;
			FOR(j, 0, x) {
				if (s[j] == 'U' && a[i] == 0) a[i] = 9;
				else if(s[j] == 'D' && a[i] == 9) a[i] = 0;
				else if (s[j] == 'U') a[i] --;
				else a[i] ++;
			}
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}