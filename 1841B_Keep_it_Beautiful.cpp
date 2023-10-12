#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	vector<int> a(n);
	stack<int> st;
	int flg = 1;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (st.empty() || (a[i] >= st.top() && flg)) {
			cout << 1;
			st.push(a[i]);
		} else if (a[i] <= a[0] && flg) {
			cout << 1;
			flg = 0;
			st.push(a[i]);
		} else if (a[i] <= a[0] && a[i] >= st.top()) {
			st.push(a[i]);
			cout << 1;
		} else {
			cout << 0;
		}
	}
	cout << endl;
	return 0;
}

int main(void)
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		Solve(n);
	}
	return 0;
}