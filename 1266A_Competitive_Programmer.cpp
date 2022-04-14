#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s;
	cin >> t;
	while (t --) {
		cin >> s;
		int a[10] = {0}, sum = 0, cnt = 0;
		for (int i = 0; s[i] != 0; ++ i) {
			a[s[i] - '0'] ++;
			sum += s[i] - '0'; 
			if ((s[i] - '0') % 2 == 0) cnt ++;
		}
		if (a[0] > 0 && sum % 3 == 0 && cnt >= 2) cout << "red" << endl;
		else cout << "cyan" << endl;
	}
	return 0;
}