#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int c[5], sum = 0;
	for (int i = 0; i < 5; ++ i) {
		cin >> c[i];
		sum += c[i];
	}	
	if (sum % 5 == 0 && sum != 0) cout << sum / 5 << endl;
	else cout << -1 << endl;
	return 0;
}