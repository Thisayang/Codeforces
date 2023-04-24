#include <bits/stdc++.h>

using namespace std;

void Solve()
{
	int n;
	scanf("%d", &n);
	char ch[n];
	int cnt[26];
	memset(cnt, -1, sizeof(cnt));
	int flg = 0;
	scanf("%s", ch);
	for (int i = 0; i < n; ++i) {
		cnt[ch[i] - 'a'] = i;
	}
	for (int i = 0; i < 26; ++i) {
		if (cnt[i] != -1) {
			flg = cnt[i];
			printf("%c", i + 'a');
			break;
		}
	}
	for (int i = 0; i < n; ++i) {
		if (i != flg) {
			printf("%c", ch[i]);
		}
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