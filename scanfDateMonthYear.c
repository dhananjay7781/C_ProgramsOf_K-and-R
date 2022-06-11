#include <stdio.h>

void main() {
	int day,year;
	char MonthName[20];

	scanf("%d %s %d",&day,MonthName,&year); //&MonthName nhi lihil karan %s la char* lagt & lihil tr char** hoil
	printf("Day: %d Month: %s Year: %d\n",day,MonthName,year);
}
