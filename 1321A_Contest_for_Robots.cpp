#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, r[110], b[110];
	while(cin >> n) {
		int wb = 0, wr = 0;
		for(int i = 0; i < n; ++ i) cin >> r[i];
		for(int i = 0; i < n; ++ i) cin >> b[i];
		for(int i = 0; i < n; ++ i) {
			if(r[i] == 0 && b[i] == 1) wb ++;
			else if(r[i] == 1 && b[i] == 0) wr ++;
		}
		if(wr == 0) cout << -1 << endl;
		else {
			int i = 1;
			while(i * wr <= wb) i ++;
			cout << i << endl;
		}
	}
	return 0;
}
