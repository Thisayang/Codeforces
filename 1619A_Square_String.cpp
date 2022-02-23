#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while(t --) {
		string s;
		cin >> s;
		int flg = 1;
		if(s.length() % 2 != 0) cout << "NO" << endl;
		else {
			int n = s.length() / 2;
			for(int i = 0; i < n; ++ i) {
				if(s[i] != s[i + n]) {
					cout << "NO" << endl;
					flg = 0;
					break;
				}
			}
			if(flg == 1) cout << "YES" << endl;
		}	
	}
	return 0;
}
