#include <stdio.h>

void main() {
	int x = 10;

	int ans;

	ans = ++x + ++x; //saglyat shevti x chi value mhnje latest value takychi
	printf("%d\n",x); //12
	printf("%d\n",ans);  //24
}
