#include <stdio.h>
void main() {
	int x = 105;

	int ans;

	ans = x++ + x++ + x++;  //adhi divide krycha problem x + x yet tela solve krun nntr ++x kde jaych 
	printf("%d\n",x);  //108
	printf("%d\n",ans); //318
}
