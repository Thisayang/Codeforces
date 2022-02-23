#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	double d, L, v1, v2;
	cin >> d >> L >> v1 >> v2;
	cout << setprecision(8) << (L - d) / (v1 + v2);
	return 0;
}
