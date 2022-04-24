#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, mn = 100000;
	string s, t = "ACTG";
	cin >> n >> s;
	for (int i = 0; i < n - 3; ++ i) {
		int sum = 0, tmp1, tmp2;
		for (int j = 0; j < 4; ++ j) {
			if (s[i + j] < t[j]) {
				tmp1 = t[j] - s[i + j];
				tmp2 = 26 - tmp1;
			} else {
				tmp1 = s[i + j] - t[j];
				tmp2 = 26 - tmp1; 
			}
			sum += min(tmp1, tmp2);
		}
		mn = min(mn, sum);
	}
	cout << mn << endl;
	return 0;
}