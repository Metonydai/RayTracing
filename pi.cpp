#include "rtweekend.h"

#include <iostream>
#include <iomanip>
#include <math.h>
//#include <stdlib.h>

int main() {
    // Random seed
    unsigned seed;
    seed = (unsigned)time(NULL);
    srand(seed);

	//int N = 1000;
	int inside_circle = 0;
	int runs = 0;
	/*
	for (int i = 0; i < N; i++) {
		auto x = random_double(-1, 1);
		auto y = random_double(-1, 1);
		if ( x*x+ y*y < 1)
			inside_circle++;
	}
	std::cout << std::fixed << std::setprecision(12);
	std::cout << "Estimate of pi = " << 4*double(inside_circle) / N << std::endl;
	*/

	std::cout << std::fixed << std::setprecision(12);
	while(true) {
		runs++;
		auto x = random_double(-1, 1);
		auto y = random_double(-1, 1);
		if ( x*x+ y*y < 1)
			inside_circle++;

		if (runs % 10000 == 0)
			std::cout << "Estimate of Pi = " << 4*double(inside_circle) / runs << std::endl;
	}

}
