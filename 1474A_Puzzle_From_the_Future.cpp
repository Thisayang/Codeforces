#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	while(cin >> t) {
		while(t --) {
			cin >> n >> s;
			string t = "1", str = "";
			str += s[0] + 1;
			for(int i = 1; i < n; ++ i) {
				if(s[i] + 1 != str[i - 1]) {
					t += "1";
					str += s[i] + 1;
				}
				else {
					t += "0";
					str += s[i];
				}
			}
			cout << t << endl;
		}
	}
	return 0;
}
