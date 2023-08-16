#include <bits/stdc++.h>
#define N (8)
using namespace std;

const char* Solve(void)
{
	char a;
	char *ans = (char*)malloc(sizeof(char) * (N + 1));
	memset(ans, 0, N + 1);
	int cnt = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cin >> a;
			if (a != '.') {
				ans[cnt ++] = a;
			}
		}
	}
	return ans;
}

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		cout << Solve() << endl;
	}
	return 0;
}