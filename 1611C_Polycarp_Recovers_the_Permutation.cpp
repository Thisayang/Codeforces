#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> a(200010);
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		int max = *(max_element(a.begin(), a.begin() + n));
		if (a[0] != max && a[n - 1] != max) cout << "-1" << endl;
		else {
			deque<int> dq;
			dq.clear();
			for (int st = 0, end = n - 1; st <= end; ) {
				if (a[st] <= a[end]) {
					dq.push_back(a[end]);
					end --;
				} else {
					dq.push_front(a[st]);
					st ++;
				}
			}
			while (!dq.empty()) {
				cout << dq.front() << " ";
				dq.pop_front();
			}
			cout << endl;
		}
	}
	return 0;
}