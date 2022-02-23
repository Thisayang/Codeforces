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
			int a = 0, b = 0, c = 0, len = s.length();
			for(int i = 0; i < len; ++ i) {
				if(s[i] == s[0]) a ++;
				else if(s[i] == s[len - 1]) b ++;
			}
			int MAX = max(max(a, b), c);
			if(len - MAX != MAX || s[0] == s[len - 1]) cout << "NO" << endl;
			else {
				if(a > b) c = -1;
				else if(a < b) c = 1;
				int sum = 0, flg = 1;
				for(int i = 0; i < len; ++ i) {
					if(s[i] == s[0]) sum ++;
					else if(s[i] == s[len - 1]) sum --;
					else sum += c;
					if(sum < 0) flg = 0;
				}
				if(sum == 0 && flg) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
		}
	}
	return 0;
}
