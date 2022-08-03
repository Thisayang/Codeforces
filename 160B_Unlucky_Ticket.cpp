#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, cnt = 0;
	string s;
	cin >> n >> s;
	sort(s.begin(), s.begin() + n);
	sort(s.begin() + n, s.end());
	FOR(i, 0, n) {
		if (s[i] > s[i + n]) cnt ++;
		else if (s[i] < s[i + n]) cnt --;
	}
	cout << (abs(cnt) == n ? "YES" : "NO") << endl;
	return 0;
}