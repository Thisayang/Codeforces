#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s[110];
	while(cin >> n) {
		int ch[26] = {0};
		for(int i = 0; i < n; ++ i) {
			cin >> s[i];
			ch[s[i][0] - 'a'] ++;
		}
		int a, b, ans = 0;
		for(int i = 0; i < 26; ++ i) {
			if(ch[i] != 0) {
				a = b = ch[i] / 2;
				if(ch[i] & 1) a ++;
				ans += (a * a - a) / 2 + (b * b - b) / 2;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
