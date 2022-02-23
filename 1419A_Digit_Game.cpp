#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	while(cin >> t) {
		while(t --) {
			cin >> n >> s;
			int odd1 = 0, even1 = 0, odd2 = 0, even2 = 0;
			for(int i = 0; i < n; ++ i) {
				int tmp = s[i] - '0';
				if(i & 1 && tmp & 1) odd2 ++;
				else if(i & 1 && tmp % 2 == 0) even2 ++;
				else if(i % 2 == 0 && tmp & 1) odd1 ++;
				else even1 ++;
			}
			if(n & 1 && odd1 != 0) cout << 1 << endl; 
			else if(n & 1 && odd1 == 0) cout << 2 << endl; 
			else if(n % 2 == 0 && even2 != 0) cout << 2 << endl;
			else cout << 1 << endl; 			
		}
	}
	return 0;
}
