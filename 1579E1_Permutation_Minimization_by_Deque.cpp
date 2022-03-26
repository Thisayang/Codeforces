#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		deque<int> deq;
		for (int i = 0, tmp; i < n; ++ i) {
			cin >> tmp;
			if (i == 0) deq.push_back(tmp);
			else {
				if (tmp < deq.front()) deq.push_front(tmp);
				else deq.push_back(tmp);
			}
		}
		while (!deq.empty()) {
			cout << deq.front() << " ";
			deq.pop_front();
		}
		cout << endl;
	}
	return 0;
}