#include <bits/stdc++.h>

using namespace std;

void Solve()
{
	int n;
	scanf("%d", &n);
	int a[n];
	int b[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; ++i) {
		scanf("%d", &b[i]);
	}
	int maxa = 0;
	int maxb = 0;
	int tmp;
	for (int i = 0; i < n; ++ i) {
		if (a[i] > b[i]) {
			tmp = a[i];
			a[i] = b[i];
			b[i] = tmp;
		}
		maxa = (maxa > a[i]) ? maxa : a[i];
		maxb = (maxb > b[i]) ? maxb : b[i];
	}
	if (maxa == a[n - 1] && maxb == b[n - 1]) {
		printf("Yes\n");
		return;
	}
	printf("No\n");
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