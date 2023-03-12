#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s, x;
	cin >> t;
	while (t --) {
		cin >> s >> x;
		set<char> st;
		st.insert(s[0]);
		st.insert(x[0]);
		st.insert(s[1]);
		st.insert(x[1]);
		if (st.size() == 4) cout << '3' << endl;
		else if (st.size() == 3) cout << '2' << endl;
		else if (st.size() == 2) cout << '1' << endl;
		else cout << '0' << endl;
	}
	return 0;
}