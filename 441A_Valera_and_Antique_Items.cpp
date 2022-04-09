#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, v, x, tmp;
	cin >> n >> v;
	queue<int> q;
	for (int i = 0; i < n; ++ i) {
		cin >> x;
		int mn = 1000001;
		for (int j = 0; j < x; ++ j) {
			cin >> tmp;
			mn = min(mn, tmp);
		}
		if (v > mn) q.push(i + 1);
	}
	cout << q.size() << endl;
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}
