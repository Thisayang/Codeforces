#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	if(n - 10 <= 0) cout << 0;
	else if(n - 10 < 10) cout << 4;
	else if(n == 20) cout << 15;
	else if(n == 21) cout << 4;
	else cout << 0;
	return 0;
}
