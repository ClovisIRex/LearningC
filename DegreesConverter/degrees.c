#include <stdio.h>

main() {

	int fahr, celsius;
        //int lower, upper, step;

	int lower = 0;
	int upper = 300;
	int step = 20;

	fahr = lower;

	while (fahr <= upper) {

		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n",fahr,celsius);
		fahr = fahr + step;
	}
}
