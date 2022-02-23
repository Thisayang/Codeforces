#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, ans = 0;
    map<int, int> m;
    cin >> n;
    for(int i = 0; i < n; ++ i) {
        cin >> a;
        if(m.find(a) != m.end()) m[a] ++;
        else m[a] = 1;
        if(ans < m[a]) ans = m[a];
    }
    cout << ans << ' ' << m.size() << endl;
	return 0;
}
