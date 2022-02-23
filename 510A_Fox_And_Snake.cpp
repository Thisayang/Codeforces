#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> m >> n;
	for(int i = 1; i <= m; i ++) {
		if(i % 2 == 1) {
			for(int j = 0; j < n; j ++) cout << "#";
		}
		else {
			if(i % 4 == 0) {
				cout << "#";
				for(int j = 1; j < n; j ++) cout << ".";
			} else {
				for(int j = 1; j < n; j ++) cout << ".";
				cout << "#";
			}
		}
		cout << endl;
	}
	return 0;
}