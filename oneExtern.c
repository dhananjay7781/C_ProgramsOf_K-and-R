#include <stdio.h>

int printf(const char*,...);

extern void main() {
	printf("In main Before Company\n");
	company();
	printf("In main After Company\n");
}
