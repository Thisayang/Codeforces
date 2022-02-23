#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	while(cin >> n) {
		if(n < 3) cout << "-1";
		else for(int i = n; i > 0; -- i) cout << i << ' ';
		cout << endl;
	}
	return 0;
}
