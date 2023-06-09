#include <stdio.h>
#include "Header.h"

int main() {
	char str[] = "abcde";
	char d[100];
	my_strcpy(d, str);
	printf("s1- %s %d s2- %s %d\n\n", str, my_strlen(str), d, my_strlen(d));
	printf("s1 (%s) s2 (%s)\nres sravn: %d\n\n", str, d, my_strcmp(str, d));
	my_strcat(d, str);
	printf("s - %s %d\n\n", d, my_strlen(d));
	printf("s1 (%s) s2 (%s)\nres sravn: %d", str, d, my_strcmp(str, d));
	return 0;
}