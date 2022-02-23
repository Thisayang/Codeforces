#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[30010];
	cin >> t;
	while(t --) {
		cin >> n;
		int s[3] = {0}, ans = n / 3, Min = 0;
		for(int i = 0; i < n; ++ i) cin >> a[i], s[a[i] % 3] ++;
		if(s[0] > ans && s[1] < ans && s[2] < ans) Min = (ans - s[1]) + 2 * (ans - s[2]);
		else if(s[0] > ans && s[1] == ans && s[2] < ans) Min = 2 * (ans - s[2]);
		else if(s[0] > ans && s[1] < ans && s[2] == ans) Min = ans - s[1];
		else if(s[0] < ans && s[1] > ans && s[2] < ans) Min = (ans - s[2]) + 2 * (ans - s[0]);
		else if(s[0] == ans && s[1] > ans && s[2] < ans) Min = ans - s[2];
		else if(s[0] < ans && s[1] > ans && s[2] == ans) Min = 2 * (ans - s[0]);
		else if(s[0] < ans && s[1] < ans && s[2] > ans) Min = (ans - s[0]) + 2 * (ans - s[1]);
		else if(s[0] < ans && s[1] == ans && s[2] > ans) Min = ans - s[0];
		else if(s[0] == ans && s[1] < ans && s[2] > ans) Min = 2 * (ans - s[1]);
		else if(s[0] > ans && s[1] > ans && s[2] < ans) Min = 2 * (s[0] - ans) + (s[1] - ans);
		else if(s[0] > ans && s[1] < ans && s[2] > ans) Min = 2 * (s[2] - ans) + (s[0] - ans);
		else if(s[0] < ans && s[1] > ans && s[2] > ans) Min = 2 * (s[1] - ans) + (s[2] - ans);
		cout << Min << endl;
	}
	return 0;
}
