#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	while(cin >> t) {
		while(t --) {
			stack<char> st;
			cin >> n >> s;
			int sum = 0, flg = 0;
			for(int i = n - 1; i >= 0; -- i) {
				if((s[i] - '0') % 2 == 0 && flg == 0) continue;
				if((s[i] - '0') % 2 == 1 && flg == 0) flg = 1;
				sum += s[i] - '0';
				st.push(s[i]);
				if(sum % 2 == 0) break;
			}
			if(st.empty() || sum & 1) cout << -1;
			else {
				while(!st.empty()) {
					cout << st.top();
					st.pop();
				}
			}
			cout << endl;
		}
	}
	return 0;
}
