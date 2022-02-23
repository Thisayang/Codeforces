#include <bits\stdc++.h>
using namespace std;
int main() {
	int a1, a2, a3;
	cin >> a1 >> a2 >> a3;
	int cups = a1 + a2 + a3;
	int b1, b2, b3;
	cin >> b1 >> b2 >> b3;
	int medals = b1 + b2 + b3;
	int n;
	cin >> n;
	n = n - cups / 5 - medals / 10;
	if(cups % 5 != 0) n -= 1;
	if(medals % 10 != 0) n -= 1;
	if(n >= 0) cout << "YES";
	else cout << "NO";
	return 0;
}
