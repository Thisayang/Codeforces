#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s, t;
	int n;
	map<char, int> mp;
	mp['v'] = 0;
	mp['<'] = 1;
	mp['^'] = 2;
	mp['>'] = 3;
	while(cin >> s >> t >> n) {
		int tmp = mp[s[0]] - mp[t[0]];
		if(tmp < 0) tmp += 4;
		if(tmp == 0) cout << "undefined" << endl;
		else if(tmp == 3) {
			if(n % 4 == 1) cout << "cw" << endl;
			else if(n % 4 == 3) cout << "ccw" << endl;
			else cout << "undefined" << endl;
		}
		else if(tmp == 2) {
			cout << "undefined" << endl;
		}
		else if(tmp == 1) {
			if(n % 4 == 1) cout << "ccw" << endl;
			else if(n % 4 == 3) cout << "cw" << endl;
			else cout << "undefined" << endl;
		}
	}
	return 0;
}
