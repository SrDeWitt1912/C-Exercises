#include <stdio.h>

void main() {
	int initial_days = 1329;

	int years = initial_days / 365;
	initial_days -= years * 365;
	int weeks = initial_days / 7;
	initial_days -= weeks * 7;
	int days = initial_days;
	

	printf("Years: %d", years);
	printf("Weeks: %d", weeks);
	printf("Days: %d", days);
}