#include <bits/stdc++.h>

using namespace std;

int cmp(const void* a, const void* b) {
	return (*(int* )a - *(int* )b);
}
void Solve(int n)
{
	int a[n];
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	for (int i = n - 1, j = 0; i > j; --i, ++j) {
		ans += a[i] - a[j];
	}
	printf("%d\n", ans);
	return;
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