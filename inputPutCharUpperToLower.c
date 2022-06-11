#include <stdio.h>
#include <ctype.h>

main() {    /*lower: convert input to lowercase*/
	
	int c;
	while((c = getchar()) != EOF)
		putchar(tolower(c));
	return 0;
}
