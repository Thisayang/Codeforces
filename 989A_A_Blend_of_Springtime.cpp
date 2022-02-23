#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	while(cin >> s) {
		int l = s.length();
		bool flg = 0;
		for(int i = 0; i < l; ++ i) {
			string p = s.substr(i, 3);
			if(p == "ABC" || p == "ACB" || p == "BAC" || p == "BCA" || 
			p == "CAB" || p == "CBA") {
				flg = 1;
				break;
			}
		}
		if(flg) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
