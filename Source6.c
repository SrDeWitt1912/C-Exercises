#include <stdio.h>

void main() {
	int initial_days = 1329;

	int years = initial_days / 365;
	initial_days -= years * 365;
	int weeks = initial_days / 7;
	initial_days -= weeks * 7;
	int days = initial_days;
	

	printf("Years: %d\n", years);
	printf("Weeks: %d\n", weeks);
	printf("Days: %d\n", days);
}
