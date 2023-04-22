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

	int sqrt_N = 10000;
	int inside_circle = 0;
	int inside_circle_stratified = 0;
	
	for (int i = 0; i < sqrt_N; i++) {
		for (int j = 0; j < sqrt_N; j++) {
			auto x = random_double(-1, 1);
			auto y = random_double(-1, 1);
			if ( x*x + y*y < 1)
				inside_circle++;
			x = 2 * ((i+ random_double()) / sqrt_N) - 1;
			y = 2 * ((j+ random_double()) / sqrt_N) - 1;
			if ( x*x + y*y < 1)
				inside_circle_stratified++;
		}
	}

	auto N = static_cast<double>(sqrt_N) * sqrt_N;
	std::cout << std::fixed << std::setprecision(12);
	std::cout << "Regular    Estimate of pi = " << 4*double(inside_circle) / (sqrt_N*sqrt_N) << std::endl;
	std::cout << "Stratified Estimate of pi = " << 4*double(inside_circle_stratified) / (sqrt_N*sqrt_N) << std::endl;

}
