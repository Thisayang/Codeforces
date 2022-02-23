#include <cstdio>
int main(){
	int a[4], max = 0;
	for(int i = 0; i < 4; i ++){
		scanf("%d",&a[i]);
		if(max < a[i]) max = a[i];
	}
	for(int i = 0; i < 4; i ++)
		if(a[i] < max) printf("%d ", max - a[i]);
	return 0;
}