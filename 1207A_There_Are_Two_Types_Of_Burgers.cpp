#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int b, p, f, h, c, sum = 0;
		cin >> b >> p >> f >> h >> c;
		if(c > h) {
			if(b >= 2 * f) {
				sum += f * c;
				b -= 2 * f;
				if(b >= 2 * p) sum += p * h;
				else sum += (b / 2) * h;
			}
			else sum += (b / 2) * c;
		} else {
			if(b >= 2 * p) {
				sum += p * h;
				b -= 2 * p;
				if(b >= 2 * f) sum += f * c;
				else sum += (b / 2) * c;
			}
			else sum += (b / 2) * h;
		}
		cout << sum << endl;
	}
	return 0;
}
