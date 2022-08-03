#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans = 0;
	string s;
	map<char, int> mp;
	cin >> n >> s;
	for(int i = 0; s[i] != 0; ++ i) {
		if (s[i] >= 'a' && s[i] <= 'z') mp[s[i] - 32] ++;
		else {
			if (mp[s[i]] > 0) mp[s[i]] --;
			else ans ++;
		}
	}
	cout << ans << endl;
	return 0;
}