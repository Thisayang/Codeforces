#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s;
	while(cin >> t) {
		while(t --) {
			cin >> s;
			int len = s.length();
			for(int i = 0; i < len; ++ i) {
				if(i % 2 == 0) {
					if(s[i] != 'a') s[i] = 'a';
					else s[i] = 'b';
				}
				else {
					if(s[i] != 'z') s[i] = 'z';
					else s[i] = 'y';
				}
			}
			cout << s << endl;
		}
	}
	return 0;
}
