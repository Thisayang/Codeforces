#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	int sum = (a - b) * c;
	cout << (sum % b  == 0 ? sum / b : sum / b + 1) << endl;
	return 0;
}