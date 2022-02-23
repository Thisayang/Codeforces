#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int x;
	string s, t;
	int week[8] = {0, 52, 52, 52, 52, 53, 53, 52};
	while(cin >> x >> s >> t) {
		if(t == "month") {
			if(x < 30) cout << 12 << endl; 
			else if(x == 30) cout << 11 << endl;
			else cout << 7 << endl;
		}
		else cout << week[x] << endl;
	}
	return 0;
}
