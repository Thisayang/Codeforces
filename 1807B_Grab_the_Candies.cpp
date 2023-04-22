#include <bits/stdc++.h>

using namespace std;

void Solve(void)
{
	int n;
	scanf("%d", &n);
	int a[n];
	int even = 0;
	int odd = 0;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
		if (a[i] & 1) {
			odd += a[i];
		} else {
			even += a[i];
		}
	}
	if (odd < even) {
		printf("YES\n");
	} else {
		printf("NO\n");
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
}