#include <bits/stdc++.h>

using namespace std;

void Solve(int n)
{
	int sum = n * (n + 1) / 2;
	if (sum % n != 0) {
		printf("%d", n - (sum % n) + 1);
	} else {
		printf("1");
	}
	for (int i = 2; i <= n; ++i) {
		printf(" %d", i);
	}
	printf("\n");
	return ;
}

int main()
{
	int t;
	int n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		Solve(n);
	}
	return 0;
}