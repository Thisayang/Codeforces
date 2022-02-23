#include <bits\stdc++.h>
#define LL long long
using namespace std;
LL a[200001], b[200001];
int main() {
	LL n, Max = 0;
	cin >> n;
	for(int i = 0; i < n; i ++) {
		cin >> b[i];
		a[i] = b[i] + Max;
		Max = max(a[i], Max);
	}
	for(int i = 0; i < n; i ++) cout << a[i] << ' ';
	return 0;
}
