#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, a[1010];
	string s[1010];
	while(cin >> n >> m) {
		int sum = 0;
		for(int i = 0; i < n; ++ i) cin >> s[i];
		for(int i = 0; i < m; ++ i) cin >> a[i];
		for(int i = 0; i < m; ++ i) {
			int ch[5] = {0};
			for(int j = 0; j < n; ++ j) {
				ch[s[j][i] - 'A'] ++;
			}
			sort(ch, ch + 5);
			sum += ch[4] * a[i];
		}
		cout << sum << endl;
	}
	return 0;
}
