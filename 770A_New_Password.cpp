#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k;
	string s = "abcdefghijklmnopqrstuvwxyz";
	cin >> n >> k;
	for(int i = 0, j = 0; i < n; ++ i, ++ j) {
		cout << s[j % k];
	}
	return 0;
}
