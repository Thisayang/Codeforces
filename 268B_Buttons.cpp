#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	while(cin >> n) {
		int sum = n;
		for(int i = 1, j = n - 1; i < n; ++ i, -- j) sum += i * j;
		cout << sum << endl;
	}
	
	return 0;
}
