#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k;
	string s;
	while(cin >> n >> k >> s) {
		sort(s.begin(), s.end());
		int ans = s[0] - 'a' + 1;
		char tmp = s[0];
		for(int i = 1; k > 1 && i < n; ++ i) {
			if(s[i] - tmp > 1) ans += s[i] - 'a' + 1, tmp = s[i], -- k;
		}
		if(k != 1) ans = -1;
		cout << ans << endl;
	}
	return 0;
}
