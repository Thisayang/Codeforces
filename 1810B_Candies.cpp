#include <bits/stdc++.h>

using namespace std;

void Solve()
{
	int n;
	scanf("%d", &n);
	if ((n & 1) == 0) {
		printf("-1\n");
		return;
	} else {
		int a[40] = {0};
		int cnt = 0;
		while (n > 1) {
			if ((((n + 1) / 2) & 1) == 0) {
				a[cnt++] = 2;
				n = (n - 1) / 2;
			} else {
				a[cnt++] = 1;
				n = (n + 1) / 2;
			}
		}
		printf("%d\n", cnt--);
		for (int i = cnt; i >= 0; --i) {
			printf("%d ", a[i]);
		}
		printf("\n");
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