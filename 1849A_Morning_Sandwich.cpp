#include <bits/stdc++.h>

using namespace std;

int Solve(int b, int c, int h)
{
	int ans = 0;
	if (c + h < b) {
		ans = 2 * (c + h) + 1;
	} else {
		ans = (2 * b) - 1;
	}
	return ans;
}

int main()
{
	int t;
	int b;
	int c;
	int h;
	cin >> t;
	while (t--) {
		cin >> b >> c >> h;
		cout << Solve(b, c, h) << endl;
	}
}