#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	double a, b, Min = 100.0;
	cin >> n >> m;
	for(int i = 0; i < n; ++ i) {
		cin >> a >> b;
		Min = min(Min, a / b);
	}
	printf("%.8f", m * Min);
	return 0;
}
