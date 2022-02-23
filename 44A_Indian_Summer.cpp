#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s, t;
	while(cin >> n) {
		set<pair<string, string>> st;
		for(int i = 0; i < n; ++ i) {
			cin >> s >> t;
			st.insert(pair<string, string>(s, t));
		}
		cout << st.size() << endl;
	}
	return 0;
}
