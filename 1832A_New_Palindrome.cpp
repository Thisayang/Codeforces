#include <bits/stdc++.h>
#define MAX_LEN 60
using namespace std;

void Solve(void)
{
	char ch[MAX_LEN];
	int a[26] = {0};
	int cnt = 0;
	scanf("%s", ch);
	for (int i = 0; ch[i] != 0; ++i) {
		a[ch[i] - 'a']++;
		if (a[ch[i] - 'a'] > 1) {
			a[ch[i] - 'a'] = -1 * MAX_LEN;
			cnt++;
		}
	}
	if (cnt > 1) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return ;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		Solve();
	}
}