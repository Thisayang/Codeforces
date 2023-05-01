#include <bits/stdc++.h>

using namespace std;

void Solve(int a, int b, int c, int d)
{
	if (b - a > d - c || d < b) {
		cout << -1 << endl;
		return;
	}
	cout << d - b + a - c + d - b << endl;
	return;
}

int main()
{
	int t;
	int a;
	int b;
	int c;
	int d;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c >> d;
		Solve(a, b, c, d);
	}
}