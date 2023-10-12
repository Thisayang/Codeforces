#include <bits/stdc++.h>

using namespace std;

int Ans(int x, int a, int b)
{
	return min(min(a, b), min(x - a + 1, x - b + 1));
}

int Solve(int n, int x1, int y1, int x2, int y2)
{
	int a = Ans(n, x1, y1);
	int b = Ans(n, x2, y2);
	return abs(a - b);
}

int main(void)
{
	int t;
	int n;
	int x1;
	int x2;
	int y1;
	int y2;
	cin >> t;
	while (t--) {
		cin >> n >> x1 >> x2 >> y1 >> y2;
		cout << Solve(n, x1, x2, y1, y2) << endl;
	}
	return 0;
}