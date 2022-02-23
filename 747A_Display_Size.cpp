#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	for(int i = sqrt(n); i > 0; -- i) {
		if(n % i == 0) {
			cout << i << ' ' << n / i;
			break;
		}
	}
	return 0;
}
