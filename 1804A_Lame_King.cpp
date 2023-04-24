#include <bits/stdc++.h>

using namespace std;

void Solve()
{
	int a;
	int b;
	scanf("%d%d", &a, &b);
	a = abs(a);
	b = abs(b);
	int min = a < b ? a : b;
	int max = a > b ? a : b;
	if (min == max) {
		printf("%d\n", min * 2);
	} else {
		printf("%d\n", max * 2 - 1);
	}
	return;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		Solve();
	}
	return 0;
}

