#include <stdio.h>

float convertToCelsius(float fahr);

main() {

	float fahr, celsius;
        //float lower, upper, step;

	float lower = 0;
	float upper = 300;
	float step = 20;

	fahr = lower;

	while (fahr <= upper) {

		celsius = convertToCelsius(fahr);
		printf("%3.0f %6.1f\n",fahr,celsius);
		fahr = fahr + step;
	}
}

float convertToCelsius(float fahr) {
	return (5.0/9.0) * (fahr-32.0);
}
