#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, ans = 0, cnt = 0;
	queue<int> q;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a;
		if (a < 0) cnt ++;
		ans ++;
		if (cnt == 3) {
			cnt = 1;
			q.push(ans - 1);
			ans = 1;
		}
	}
	q.push(ans);
	cout << q.size() << endl;
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}