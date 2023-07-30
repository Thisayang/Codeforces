#include <bits/stdc++.h>

using namespace std;

int StrCmp(char *a, char *b)
{
	int len = strlen(a);
	for (int i = 0; i <= len / 2; ++i) {
		if (a[i] != b[len - i - 1]) {
			return 1;
		}
	}
	return 0;
}
void Solve(int n)
{
	char ch[n];
	char tmp[n];
	char a;
	int flg = 0;
	int flg1 = 0;
	int flg2 = 0;
	for (int i = 0; i < 2 * (n - 1); ++i) {
		scanf("%s", ch);
		if (strlen(ch) == n - 1) {
			if (flg1 == 0) {
				strcpy(tmp, ch);
				flg1++;
			} else {
				flg += StrCmp(ch, tmp);
			}
		} else if (strlen(ch) == 1) {
			if (flg2 == 0) {
				a = ch[0];
				flg2++;
			} else {
				flg += (ch[0] == a ? 0 : 1);
			}
		}
	}
	printf("%s\n", flg == 0 ? "YES" : "NO");
	return ;
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