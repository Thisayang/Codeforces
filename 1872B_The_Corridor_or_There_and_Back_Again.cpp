#include <bits/stdc++.h>
#define MAX (310)
using namespace std;

int Solve(int n)
{
	int d;
	int s;
	int ans = MAX;
	for (int i = 0; i < n; ++i) {
		cin >> d >> s;
		ans = min(ans, d + (s - 1) / 2);
	}
	return ans;
}

int main(void)
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << Solve(n) << endl;
	}
	return 0;
}