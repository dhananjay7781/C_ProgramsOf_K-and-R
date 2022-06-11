#include <stdio.h>

void main() {
	int x = 10;

	int ans;

	ans = x++ + x++; //saglyat shevti x chi value mhnje latest value takychi hyat temp return krych
	printf("%d\n",x); //12
	printf("%d\n",ans);  //21
}
