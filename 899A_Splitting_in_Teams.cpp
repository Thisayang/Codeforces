#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, num1 = 0, num2 = 0;
	cin >> n;
	for(int i = 0; i < n; ++ i) {
		cin >> a;
		if(a == 1) num1 ++;
		else num2 ++;
	}
	int Min = min(num1, num2);
	cout << Min + (num1 - Min) / 3;
	return 0;
}
