#include <bits/stdc++.h>

#define MAX_LEN 11
using namespace std;

void Solve(char ch[])
{
	char s[] = "codeforces";
	int cnt = 0;
	for (int i = 0; i < MAX_LEN; ++i) {
		if (ch[i] != s[i]) {
			cnt ++;
		}
	}
	printf("%d\n", cnt);
	return;
}

int main()
{
	int t;
	char s[11];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		Solve(s);
	}
	return 0;
}