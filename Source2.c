#include <stdio.h>

void main() {
	char characters[] = { 'X', 'M', 'L' };

	printf("The reverse of %s is %c%c%c\n", characters, characters[2], characters[1], characters[0]);
}