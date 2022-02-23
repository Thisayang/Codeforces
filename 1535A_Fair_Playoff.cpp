#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, s1, s2, s3, s4;
    cin >> t;
    while(t --) {
        cin >> s1 >> s2 >> s3 >> s4;
        int Min1 = min(s1, s2);
        int Min2 = min(s3, s4);
        int Max1 = max(s1, s2);
        int Max2 = max(s3, s4);
        if(Min1 > Max2 || Min2 > Max1) puts("NO");
        else puts("YES");
    }
	return 0;
}
