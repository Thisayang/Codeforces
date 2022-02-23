#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	while(cin >> n >> m) {
		int sum = 1;
		while(n-- && sum <= m) sum *= 2;
		cout << m % sum << endl;
	}
	return 0;
}
