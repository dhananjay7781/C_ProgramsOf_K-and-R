#include <stdio.h>

void main() {
	int x = 4,y=5;

	int ans1,ans2,ans3,ans4;

	ans1 = x & y;
	ans2 = x | y;
	ans3 = x ^ y;
	
	printf("%d\n",ans1); //4
	printf("%d\n",ans2); //5
	printf("%d\n",ans3); //1
}
