#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a;
	cin >> n;
	int sum = 0, odd = 0, even = 0;
	for(int i = 0; i < n; ++ i) {
		cin >> a;
		sum += a;
		if(a & 1) odd ++;
		else even ++;
	}
	if(sum & 1) cout << odd << endl;
	else cout << even << endl;
	return 0;
}
