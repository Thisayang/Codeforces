#include <bits/stdc++.h>
#define MAX_LEN 101
using namespace std;

void Solve(int n)
{
	int tmp;
	int a[MAX_LEN] = {0};
	for (int i = 0; i < n; ++i) {
		scanf("%d", &tmp);
		a[tmp]++;
	}
	for (int i = 1; i < MAX_LEN; ++i) {
		if (a[i] > a[i - 1]) {
			printf("NO\n");
			return;
		}
	}
	printf("YES\n");
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