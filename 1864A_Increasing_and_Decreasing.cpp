#include <bits/stdc++.h>

using namespace std;

int Solve(int x, int y, int n)
{
	stack<int> st;
	int i;
	int j;
	for (i = 0, j = y; i < n - 1 && j >= x; ++i) {
		st.push(j);
		j -= i + 1;
	}
	if (j >= x)
		st.push(x);
	if (st.size() != n) {
		cout << -1 << endl;
		return 0;
	}
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;
	return 0;
}

int main(void)
{
	int t;
	int x;
	int y;
	int n;
	cin >> t;
	while (t--) {
		cin >> x >> y >> n;
		Solve(x, y, n);
	}
	return 0;
}