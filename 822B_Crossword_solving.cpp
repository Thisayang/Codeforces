#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, mn = 1010;
	string s, t;
	queue<int> q;
	cin >> n >> m >> s >> t;
	for (int i = 0; i <= m - n; ++ i) {
		int cnt = 0;
		for (int j = 0; j < n; ++ j) {
			if (t[i + j] != s[j]) cnt ++;
		}
		if (cnt < mn) {
			mn = cnt;
			q = queue<int>();
			for (int j = 0; j < n; ++ j) {
				if (t[i + j] != s[j]) q.push(j + 1);
			}
		}
	}
	cout << q.size() << endl;
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
	return 0;
}