#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s;
	while(cin >> t >> s) {
		for(int i = 1; i <= t; ++ i) {
			if(t % i == 0)
				reverse(s.begin(), s.begin() + i);
		}
		cout << s << endl;
	}
	return 0;
}
