#include <bits/stdc++.h>

using namespace std;
int Ans(int a, int b, int m, int n) {
	if ((a == 1 && b == 1) || (a == 1 && b == n) || (a == m && b == 1) || (a == m && b == n)) {
		return 2;
	} else if (a == 1 || a == m || b == 1 || b == n) {
		return 3;
	} else {
		return 4;
	}
}
void Solve(int m, int n)
{
	int a;
	int b;
	int c;
	int d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int ans1 = Ans(a, b, m, n);
	int ans2 = Ans(c, d, m, n);
	printf("%d\n", ans1 < ans2 ? ans1 : ans2);
	return ;
}
int main()
{
	int t;
	int m;
	int n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &m, &n);
		Solve(m, n);
	}
	return 0;
}