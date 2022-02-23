#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, a;
	while(cin >> n >> k) {
		int s[40] = {0}, l[910] = {0};
		for(int i = 1; i <= k; ++ i) cin >> a, s[i] = a, l[a] = i;
		for(int i = 1; i <= k; ++ i) {
			cout << s[i];
			for(int x = 1, m = n - 1;  m > 0; ++ x) {
				if(l[x] == 0) {
					cout << ' ' << x;
					l[x] = i;
					m --;
				}
			}
			cout << endl;
		}
	}
	return 0;
}
