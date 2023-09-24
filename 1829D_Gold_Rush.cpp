#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int m) {
	if (n == m)
		return 0;
	if (n % 3 != 0 || n < m)
		return -1;
	queue<int> que;
	que.push(m);
	int front;
	while (!que.empty()) {
		front = que.front();
		que.pop();
		if (front * 3 == n) {
			return 0;
		} else if (front * 3 < n) {
			que.push(front * 3);
		}
		if (front % 2 != 0)
			continue;
		if (front / 2 * 3 == n) {
			return 0;
		} else if (front / 2 * 3 < n) {
			que.push(front / 2 * 3);	
		}
	}
	return -1;
}

int main(void)
{
	int t;
	int n;
	int m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cout << (Solve(n, m) ? "NO" : "YES") << endl;
	}
}