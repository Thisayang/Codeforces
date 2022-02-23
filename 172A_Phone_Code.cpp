#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s, t;
	while(cin >> n >> s) {
		int ans = s.size();
		for(int i = 1; i < n; ++ i) {
			cin >> t;
			for(int j = 0; j < ans; ++ j) {
				if(s[j] != t[j]) {
					ans = j;
					break;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
