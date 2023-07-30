#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	int a;
	int b;
	int ans = -1;
	int q = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> a >> b;
		if (a <= 10 && b > q) {
			q = b;
			ans = i;
		}
	}
	return ans;
}

int main()
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
        cout << Solve(n) << endl;
	}
}