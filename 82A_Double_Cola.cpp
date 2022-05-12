#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, cnt = 5, flg = 1;
	string name[] = {"", "Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	cin >> n;
	while (n > cnt) {
		n -= cnt;
		cnt *= 2;
		flg *= 2;
	}
	n = (n + flg - 1) / flg;
	cout << name[n] << endl;
	return 0;
}