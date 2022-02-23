#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, a;
	while(cin >> n >> k) {
		int s[110] = {0};
		set<int> st;
		for(int i = 0; i < n; ++ i) {
			cin >> a;
			s[a] ++;
			st.insert(a);
		}
		int Max = 0;
		for(int i = 0; i < 110; ++ i) Max = max(s[i], Max);
		Max = (Max + k - 1) / k * k * st.size();
		cout << Max - n << endl;
	}
	return 0;
}
