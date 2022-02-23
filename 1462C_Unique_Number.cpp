#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	stack <int> st;
	while(cin >> t) {
		while(t --) {
			cin >> n;
			if(n > 45) cout << -1;
			else {
				int s = 9;
				while(n > 0) {
					if(n < s) st.push(n);
					else st.push(s);
					n -= s;
					s --;
				}
			}
			while(!st.empty()) {
				cout << st.top();
				st.pop();
			}
			cout << endl;
		}
	}
	return 0;
}
