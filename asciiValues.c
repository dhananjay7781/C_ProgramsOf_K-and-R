#include <stdio.h>

int main(void) {
	printf("Ascii of Lowercase characters\n");
	
	for(char ch = 'A';ch<='Z';ch++){
		printf("Ascii of %c = %d\n",ch,ch);
	}
	
	printf("Ascii of Lowercase characters\n");
	for(char ch = 'a';ch<='z';ch++){
		printf("Ascii of %c = %d\n",ch,ch);
	}
}
