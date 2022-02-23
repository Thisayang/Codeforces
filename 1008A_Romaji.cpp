#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	while(cin >> s) {
		bool flg = 1;
		char ch[6] = {'a', 'i', 'e', 'o', 'u', 'n'};
		for(int i = 0; i < s.length(); ++ i) {
			bool ok = 0;
			for(int j = 0; j < 6; ++ j) {
				if(s[i] == ch[j]) {
					ok = 1;
					break;
				}
			}
			if(ok) continue;
			else {
				if(s[i + 1] != 'a' && s[i + 1] != 'i' && s[i + 1] != 'e' && s[i + 1] != 'o' && s[i + 1] != 'u') {
					flg = 0;
					break;
				}
			}
					
		}
		if(flg) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
