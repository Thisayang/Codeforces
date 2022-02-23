#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		long long n, m;
		cin >> n >> m;
		long long edge, sum;
		sum = n * m;
		edge = m * (n - 1) + n * (m - 1);
		if(sum >= edge) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
