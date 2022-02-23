#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int a, b, c;
		cin >> a >> b >> c;
		cout << max(max(a, b), c) << endl;
	}
	return 0;
}
