#include <bits\stdc++.h>
using namespace std;
int main() {
	int t, h, min;
	cin >> t;
	while(t --) {
		cin >> h >> min;
		int sum = 60 - min + (23 - h) * 60;
		cout << sum << endl;
	}
	return 0;
}