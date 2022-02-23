#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	while(cin >> s) {
		set<string> st;
		st.insert(s);
		int len = s.length();
		for(int i = 1; i < len; ++ i) {
			string t = s.substr(i, len) + s.substr(0, i);
			st.insert(t);
		}
		cout << st.size() << endl;
	}
	return 0;
}
