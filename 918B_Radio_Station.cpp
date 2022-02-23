#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
struct ip{
	string name, indress;
};
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	ip in[1010], im[1010]; 
	while(cin >> n >> m) {
		for(int i = 0; i < n; ++ i) cin >> in[i].name >> in[i].indress;
		for(int i = 0; i < m; ++ i) {
			cin >> im[i].name >> im[i].indress;
			int len = im[i].indress.length();
			for(int j = 0; j < n; ++ j) {
				if(im[i].indress.substr(0, len - 1) == in[j].indress) {
					cout << im[i].name << " " << im[i].indress << " #" << in[j].name << endl;
					break;
				}
			}
		}
	}
	return 0;
}
