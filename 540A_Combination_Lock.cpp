#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, sum = 0;
	char a[1001], b[1001];
	cin >> n;
	cin >> a >> b;
	for(int i = 0; i < n; i ++) {
		int x = abs(a[i] - b[i]);
		if(x > 5) x = 10 - x;
		sum += x;
	} 
	cout << sum << endl;
	return 0;
}