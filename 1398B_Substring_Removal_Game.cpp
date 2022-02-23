#include <bits\stdc++.h>
using namespace std;
int ans[101];
int main() {
	int t;
	string s;
	cin >> t;
	while(t --) {
		cin >> s;
		memset(ans, 0, sizeof ans);
		int len = s.length();
		int res = 0, cnt = 0;
		for(int i = 0; i < len; ++ i) {
			if(s[i] == '1') {
				ans[++ cnt] ++;
				while(s[++ i] == '1') ans[cnt] ++;
			}
 		}
		sort(ans + 1, ans + cnt + 1);
		for(int i = 1; i <= cnt; ++ i)
			if((i & 1) == (cnt & 1)) res += ans[i];
		cout << res << endl;
	}
	return 0;
}
