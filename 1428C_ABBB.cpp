#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s;
	cin >> t;
	while (t --) {
		cin >> s;
		queue<char> q;
		string x = "";
		for (int i = 0; s[i] != 0; ++ i) {
			if (s[i] == 'B') {
				if (!q.empty()) {
					q.pop();
				} else {
					q.push('B');
				}
			} else {
				q.push('A');
			}
		}
		cout << q.size() << endl;
	}
	return 0;
}