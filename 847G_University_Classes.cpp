#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s[1010];
	int n;
	while(cin >> n) {
		for(int i = 0; i < n; ++ i) cin >> s[i];
		int ans = 0;
		for(int i = 0; i < 7; ++ i) {
			int tmp = 0;
			for(int j = 0; j < n; ++ j) {
				if(s[j][i] == '1') tmp ++;
			}
			ans = max(ans, tmp);
		}
		cout << ans << endl;
	}
	return 0;
}
