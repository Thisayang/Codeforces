#include <bits/stdc++.h>
#define NUM (11)
using namespace std;

int Solve(void)
{
	char s[NUM][NUM];
	int ans = 0;
	for (int i = 1; i < NUM; ++i) {
		for (int j = 1; j < NUM; ++j) {
			cin >> s[i][j];
			if (s[i][j] == 'X') {
				ans += min(min(i, NUM - i), min(j, NUM - j));
			}
		}
	}
	return ans;	
}

int main(void)
{
	int t;
	cin >> t;
	while (t--) {
		cout << Solve() << endl;
	}
}