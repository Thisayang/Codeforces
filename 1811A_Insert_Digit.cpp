#include <bits/stdc++.h>

using namespace std;

void Solve(void)
{
	int n;
	int d;
	scanf("%d%d", &n, &d);
	char ch[n];
	scanf("%s", ch);
	int flg = 0;
	
	for (int i = 0; i < n; ++i) {
		if (d + '0' > ch[i] && flg == 0) {
			printf("%d", d);
			flg = 1;
		}
		printf("%c", ch[i]);
	}
	if (!flg) {
		printf("%d", d);
	}
	printf("\n");
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