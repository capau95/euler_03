#include <stdio.h>

int main () {

	long long number = 600851475143;
	int i, lpf;

	for (i = 2; i <= number/2; i++) {

		if (number % i == 0) {

			lpf = i;	
			number /= lpf;
		}
	}

	printf("%d\n", lpf);

	return 0;

}
