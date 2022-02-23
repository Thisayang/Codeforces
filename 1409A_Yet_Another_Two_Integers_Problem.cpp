#include <bits\stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	while(n --){
		int a, b;
		scanf("%d%d", &a, &b);
		int sub = abs(a - b);
		int num = sub / 10;
		if(a % 10 != b % 10) num ++;
		printf("%d\n", num);
	}
	return 0;
}