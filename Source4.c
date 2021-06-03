#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793238462643383279502884197169399375105820974944592

void main() {
	int radius = 6;

	double perimeter = 2 * PI * radius;
	double area = PI * (radius * radius);

	printf("Perimeter of the circle = %f\n", perimeter);
	printf("Area of the circle = %f\n", area);
}