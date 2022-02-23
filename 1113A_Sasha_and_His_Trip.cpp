#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, v;
	while(cin >> n >> v) {
		int p = n - 1, sum = 0, x = p - v;
		if(x <= 0) sum = p;
		else sum = v + x * 2 + x * (x - 1) / 2;
		cout << sum << endl;
	}
	return 0;
}
