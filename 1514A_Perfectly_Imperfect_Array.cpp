#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
set<int> a;
__attribute__ ((constructor))
void pre() {
    for(int i = 1; i < 101; ++ i) a.insert(i * i);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, tmp[110];
    cin >> t;;
    while(t --) {
        cin >> n;
        for(int i = 0; i < n; ++ i) cin >> tmp[i];
        for(int i = 0; i < n; ++ i) {
                if(a.find(tmp[i]) == a.end()) {
                    puts("YES");
                    goto loop;
            } 
        }
        puts("NO");
        loop:;
    }
	return 0;
}
