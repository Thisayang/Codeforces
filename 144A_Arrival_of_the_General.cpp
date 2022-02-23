#include <cstdio>
int main()
{
	int n;
	scanf("%d", &n);
	int a[100], max = 0, min = 101, x=0, y=0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if(max < a[i]){
			max = a[i];
			x = i;
		}
		if(min >= a[i]){
			min = a[i];
			y = i;
		}
	}
	int sum = (n - y - 1) + x;
	if(y < x) sum --;
	printf("%d\n", sum);
	return 0;
}