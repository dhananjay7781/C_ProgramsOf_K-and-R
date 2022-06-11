#include <stdio.h>

void main() {
	int x = 10;
	int y = 10;

	int ans;

	ans = ++x + ++y;
	printf("%d\n",x); //12
	printf("%d\n",y); //12
	printf("%d\n",ans);  //22
}
