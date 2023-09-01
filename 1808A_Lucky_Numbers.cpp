#include <bits/stdc++.h>

using namespace std;

int Solve(int l, int r)
{
	if (r - l >= 100) {
		if (l % 100 > 90) {
			return l - (l % 100) + 190;
		}
		return l - (l % 100) + 90;
	} else {
		int ans = 0;
		int cnt = -1;
		for (int i = l; i <= r; ++i) {
			int max = 0;
			int min = 9;
			int tmp;
			int j = i;
			while (j > 0) {
				tmp = j % 10;
				max = max < tmp ? tmp : max;
				min = min > tmp ? tmp : min;
				j /= 10;
			}
			if (max - min > cnt) {
				cnt = max - min;
				ans = i;
			} 
		}
		return ans;
	}
}

int main(void)
{
	int t;
	int l;
	int r;
	cin >> t;
	while (t--) {
		cin >> l >> r;
		cout << Solve(l ,r) << endl;
	}
	return 0;
}