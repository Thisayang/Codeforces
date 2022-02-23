#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k;
	string s;
	while(cin >> n >> k >> s) {
		bool flg = 0;
		for(int i = 0; i < n;) {
			int tmp = i;
			for(int j = k; j > 0; -- j) {
				if(tmp + j >= n || s[tmp + j] == '.') {
					i = tmp + j;;
					break;
				}
			}
			if(tmp == i) {
				flg = 1;
				break;
			}
		}
		cout << (flg ? "NO" : "YES") << endl;
	}
	return 0;
}
