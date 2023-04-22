#include <bits/stdc++.h>

using namespace std;

void Solve(void)
{
	char ch[4];
	scanf("%s", ch);
	int cnt[10];
	memset(cnt, 0, sizeof(cnt));
	for (int i = 0; i < 4; ++i) {
		cnt[ch[i] - '0'] ++;
	}
	int max = 0;
	for (int i = 0; i < 10; ++i) {
		max = max > cnt[i] ? max : cnt[i];
	}
	if (max == 4) {
		printf("-1\n");
	} else if (max == 3) {
		printf("6\n");
	} else {
		printf("4\n");
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
