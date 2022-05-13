#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[2010];
	cin >> t;
	while (t --) {
		cin >> n;
		queue<int> q1, q2;
		for (int i = 0; i < 2 * n; ++ i) {
			cin >> a[i];
			if (a[i] % 2 == 0) {
				q1.push(i + 1);
			} else {
				q2.push(i + 1);
			}
		}
		int i = 1;
		while (q1.size() > 1 && i < n) {
			cout << q1.front() << " ";
			q1.pop();
			cout << q1.front() << endl;
			q1.pop();
			i ++;
		}
		while (q2.size() > 1 && i < n) {
			cout << q2.front() << " ";
			q2.pop();
			cout << q2.front() << endl;
			q2.pop();
			i ++;
		}
	}
	return 0;
}