#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	stack<int> st;
	cin >> n;
	int tmp = n, cnt = 0, ans = 0;
	while (tmp > 0) {
		cnt ++;
		st.push(tmp % 10);
		tmp /= 10;
	}
	for (int i = 1; i < cnt; ++ i) {
		ans += pow(2, i);
	}
	int t = 0;
	while (!st.empty()) {
		if (st.top() == 7) t = t * 2 + 1;
		else t *= 2;
		st.pop();
	}
	cout << ans + t + 1 << endl;
	return 0;
}