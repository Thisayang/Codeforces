#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	while(cin >> s) {
		int len = s.length();
		bool flg = 0;
		for(int i = len - 1; i >= 0; -- i) {
			if(s[i] == '0') s[i] = 0;
			else {
				len = i;
				break;
			}
		}
		for(int i = 0; i <= len / 2; ++ i) {
			if(s[i] != s[len - i]) {
				flg = 1;
				break;
			}
		}
		cout << (flg == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}
