#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	int sum = 0;
	if (s.length() == 1) cout << 0 << endl;
	else {
		int ans = 1;
		for (int i = 0; s[i] != 0; ++ i) {
			sum += s[i] - '0';
		}
		while (sum > 9) {
			ans ++;
			int tmp = sum;
			sum = 0;
			while (tmp > 0) {
				sum += tmp % 10;
				tmp /= 10;
			}
		} 
		cout << ans << endl;
	}
	return 0;
}