#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while (t --) {
		cin >> n >> s;
		ll sum = 0, tmp = 0;
		FOR(i, 0, n) {
			if (s[i] == 'L') {
				sum += i;
			} else {
				sum += n - i - 1;
			}
		}
		queue<ll> q;
		FOR(i, 0, n / 2) {
			int tmp = abs(i - (n - i - 1));
			if (i < n / 2 && s[i] == 'L') {
				sum += tmp;
				q.push(sum);
			}
			if (n - i - 1 >= n / 2 && s[n - i - 1] == 'R') {
				sum += tmp;
				q.push(sum);
			}
		}
		FOR(i, 0, n) {
			if (!q.empty()) {
				cout << q.front() << " ";
				q.pop();
			} else cout << sum << " ";
		}
		cout << endl;
	}
	return 0;
}