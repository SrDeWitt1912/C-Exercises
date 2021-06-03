#include <stdio.h>

void main() {

	float weight1;
	float numberof1;
	float weight2;
	float numberof2;

	printf("Weight - Item1: ");
	scanf_s("%f", &weight1);
	printf("No. of item1: ");
	scanf_s("%f", &numberof1);
	printf("Weight - Item2: ");
	scanf_s("%f", &weight2);
	printf("No. of item2: ");
	scanf_s("%f", &numberof2);

	printf("Average value: %f\n", ((weight1 * numberof1) + (weight2 * numberof2)) / (numberof1 + numberof2));
}