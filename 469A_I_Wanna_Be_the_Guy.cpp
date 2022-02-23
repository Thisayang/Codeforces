#include <stdio.h>
void solve(int x, int a[]){
	int temp;
	for(int i = 0; i < x; i ++){
		scanf("%d", &temp);
		a[temp] = 1;
	}
}
int main(){
	int n, x, y, a[110] = {0};
	scanf("%d", &n);
	scanf("%d", &x);
	solve(x, a);
	scanf("%d", &y);
	solve(y, a);
	for(int i = 1; i <= n; i ++){
		if(a[i] == 0){
			printf("Oh, my keyboard!");
			return 0;
		}
	}
	printf("I become the guy.");
	return 0;
}