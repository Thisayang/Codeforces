#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s;
	while(cin >> t) {
		while(t --) {
			cin >> s;
			bool flg = 1;
			int len = s.length() - 1;
			for(int i = 0; i < len; ++ i) {
				if(s[i] != s[len]) {
					flg = 0;
					break;
				}
				-- len;
			}
			if(!flg) cout << s << endl;
			else {
				sort(s.begin(), s.end());
				if(s[0] == s[s.length() - 1]) cout << -1 << endl;
				else cout << s << endl;
			}
		}
	}
	return 0;
}
