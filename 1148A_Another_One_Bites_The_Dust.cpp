#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	LL a, b, c;
	cin >> a >> b >> c;
	if(a == b) cout << a + b + c * 2;
	else if(a < b) cout << 2 * a + 1 + 2 * c;
	else cout << 2 * b + 1 + 2 * c;
	return 0;
}
