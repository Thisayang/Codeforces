#include <bits/stdc++.h>

using namespace std;
bool isLegal(int n)
{
	return n >= 0 && n <= 1e9;
}
int gcd(int m, int n)
{
	if (m < n) {
		return gcd(n, m);
	}
	while (m % n != 0) {
		int r = m % n;
		m = n;
		n = r;
	}
	return n;
}
void Solve(int m, int n)
{
	if (gcd(m, n) == 1) {
		printf("1\n%d %d\n", m, n);
		return ;
	} 
	printf("2\n");
	int x[] = {0, 0, 1, 1, 1, -1, -1, -1};
	int y[] = {1, -1, 0, -1, 1, 0, -1, 1};
	for (int i = 0; i < 8; ++i) {
		if (gcd(m + x[i], n + y[i]) == 1 && isLegal(m + x[i]) && isLegal(n + y[i])) {
			printf("%d %d\n%d %d\n", m + x[i], n + y[i], m, n);
			break;
		}
	}
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