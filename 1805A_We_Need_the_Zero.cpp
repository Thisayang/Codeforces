#include <bits/stdc++.h>

using namespace std;

void Solve()
{
	int n;
	scanf("%d", &n);
	int ans = 0;
	int tmp;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &tmp);
		ans = ans ^ tmp;
	}
	if (n & 1 || ans == 0) {
		printf("%d\n", ans);
	} else {
		printf("-1\n");
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