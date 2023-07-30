#include <bits/stdc++.h>
#define MAX_LEN 60
using namespace std;

void Solve()
{
	char ch[MAX_LEN];
	scanf("%s", ch);
	int len = strlen(ch);
	int ans = -1;
	for (int i = 1; ch[i] != 0; ++i) {
		if (ch[i] != ch[len - 1]) {
			ans = len - 1;
			break;
		}
	}
	printf("%d\n", ans);
	return ;
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