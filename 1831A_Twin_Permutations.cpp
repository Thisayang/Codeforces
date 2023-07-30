#include <bits/stdc++.h>

using namespace std;

void Solve(int n)
{
	int a[n];
	int max = 0;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
		if (max < a[i]) {
			max = a[i];
		}
	}
	for (int i = 0; i < n; ++i) {
		printf("%d ", max + 1 - a[i]);
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