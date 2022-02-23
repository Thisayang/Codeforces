#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, c0, c1, h;
	cin >> t;
	while(t --) {
		string s;
		int ans = 0;
		cin >> n >> c0 >> c1 >> h >> s;
		for(auto i : s) {
			if(i == '0') ans += min(c0, c1 + h);
			else ans += min(c1, c0 + h);
		}
		cout << ans << endl;
	}
	return 0;
}
