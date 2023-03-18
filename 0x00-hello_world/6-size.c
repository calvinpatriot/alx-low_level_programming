#include <stdio.h>

/**
* You should produce the exact same output as in the example
* Warnings are allowed
*
* Your program should return 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of char: %ld byte(s)\n", sizeof(c));
	printf("size of int: %ld byte(s)\n", sizeof(i));
	printf("size of long: %ld byte(s)\n", sizeof(li));
	printf("size of long long: %ld byte(s)\n", sizeof(lli));
	printf("size of float: %ld byte(s)\n", sizeof(f));
	return (0);
}
