#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, num[100010] = {0}, ans = 0, max = 0;
	cin >> n;
	for(int i = 0; i < 2 * n; ++ i) {
		cin >> a;
		if(num[a] == 0) num[a] ++, ans ++;
		else num[a] = 0, ans -= 1;
		if(ans > max) max = ans;
	}
	cout << max << endl;
	return 0;
}
