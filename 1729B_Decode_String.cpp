#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
const std::string alpha = "abcdefghijklmnopqrstuvwxyz";
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int q, n, ans;
	cin >> q;
	while (q --) {
		string s, t = "";
		cin >> n >> s;
		for (int i = n - 1; i >= 0; -- i) {
			if (s[i] == '0') {
				ans = (s[i - 2] - '0') * 10 + s[i - 1] - '0';
				t = alpha[ans - 1] + t;
				i -= 2;
			} else {
				ans = s[i] - '0';
				t = alpha[ans - 1] + t;
			}
		}
		cout << t << endl;
	}
	return 0;
}