#include <bits/stdc++.h>

using namespace std;

void Solve()
{
	int n;
	scanf("%d", &n);
	int tmp;
	int flg = 0;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &tmp);
		if (tmp <= i + 1) {
			flg = 1;
		}
	}
	printf("%s\n", flg == 1 ? "YES" : "NO");
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