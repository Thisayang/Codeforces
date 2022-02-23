#include <stdio.h>
int main(){
	int n, k, i, f = 0, sum = 0;
	scanf("%d%d",&n, &k);
	while(n --){
		scanf("%d",&i);
		if(i > 0 && (sum < k || (sum >= k && i >= f))) 
		{
			sum ++;
			f = i;
		}
	}
	printf("%d", sum);
	return 0;
}