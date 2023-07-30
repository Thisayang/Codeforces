#include <bits/stdc++.h>

using namespace std;
int gcd(int n, int m)
{
	if (n < m) {
		return gcd(m, n);
	}
	while (n % m != 0) {
		int r = n % m;
		n = m;
		m = r;
	}
	return m;
}
void Solve(int n, int x)
{
	if (gcd(n, x) != x) {
		printf("1\n%d\n", n);
	} else {
		printf("2\n%d -1\n", n + 1);
	}
	return ;
}

int main()
{
	int t;
	int n;
	int x;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &x);
		Solve(n, x);
	}
	return 0;
}