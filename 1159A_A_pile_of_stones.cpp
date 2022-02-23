#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans = 0;
	string s;
	cin >> n >> s;
	for(int i = 0; i < n; ++ i) {
		if(s[i] == '+') ans ++;
		else if(ans > 0) ans --;
	}
	cout << max(ans, 0);
	return 0;
}
