#include <stdio.h>

void main() {
	int num1;
	int num2;

	printf("Enter a number: ");
	scanf_s("%d", &num1);
	printf("Enter another number: ");
	scanf_s("%d", &num2);

	printf("La suma de ambos numeros es: %d\n", num1 - num2);
	printf("El producto de ambos numeros es: %d\n", num1 * num2);
}