#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int ask(int i,int j) {
	int r;
    cout << "?" << " " << i << " " << j << endl;
    fflush(stdout);
	cin >> r;
	return r;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int i, j, n;
	cin >> n;
	if(n == 1) {
		cout << "! 1" << endl;
		fflush(stdout);
		exit(0);
	}
	i = 1, j = n;
	while(1){
		int tmp = ask(i, j);
		if(ask(i, tmp) == tmp) j = tmp - 1;
		else i = tmp + 1;
		if(i == j) {
			cout << "!" << i << endl;
			fflush(stdout);
			exit(0);
		}
	}
	return 0;
}
