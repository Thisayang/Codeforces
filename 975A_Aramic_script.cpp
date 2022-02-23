#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s, tp[26] = {"a", "b", "c", "d", "e", "f", "g", 
	"h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", 
	"t", "u", "v", "w", "x", "y", "z"};
	while(cin >> n) {
		set<string> st;
		int ans = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> s;
			int a[26] = {0};
			int len = s.length();
			for(int j = 0; j < len; ++ j) a[s[j] - 'a'] ++;
			string t = "";
			for(int j = 0; j < 26; ++ j) {
				if(a[j] != 0) t += tp[j];
			}
			sort(t.begin(), t.end());
			if(st.find(t) == st.end()) {
				ans ++;
				st.insert(t);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
