#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	while(cin >> s) {
		int ans = 0;
		for(int i = 0; s[i]; ++ i) {
			int sum = 1;
			ans ++;
			while(s[i] == s[i + 1] && sum < 5) {
				sum ++;
				++ i;
			} 
		}
		cout << ans <<  endl;
	}
	return 0;
}
