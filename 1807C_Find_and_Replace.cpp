#include <bits/stdc++.h>

using namespace std;

void Solve(void)
{
	int n;
	scanf("%d", &n);
	char ch[n];
	scanf("%s", ch);
	int a[26];
	memset(a, -1, sizeof(a));
	for (int i = 0; i < n; ++i) {
		if (a[ch[i] - 'a'] == -1) {
			a[ch[i] - 'a'] = i;
			continue;
		}
		if ((a[ch[i] - 'a'] + i) & 1) {
			printf("NO\n");
			return;
		}
		a[ch[i] - 'a'] = i;
	}
	printf("YES\n");
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