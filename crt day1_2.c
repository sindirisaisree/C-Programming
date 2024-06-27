#include <stdio.h>
int main()
{
	//odd or even
	int a;
	scanf("%d",&a);
	if ((a&1)==1) {
		printf("odd");
	}
	else {
		printf("even");
	}
	return 0;
}
