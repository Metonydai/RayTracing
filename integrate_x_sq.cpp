#include "rtweekend.h"

#include <iostream>
#include <iomanip>
#include <math.h>

inline double pdf(double x) {
    //return 0.5*x;
    return 0.5;
}

int main() {
    // Random seed
    unsigned seed;
    seed = (unsigned)time(NULL);
    srand(seed);

    int N = 1000000;
    auto sum = 0.0;
    for (int i = 0; i < N; i++) {
        //auto x = sqrt(random_double(0,4));
        //if (x < 0.000001)
            //continue;
        auto x = random_double(0,2);
        sum += x*x / pdf(x);
    }
    std::cout << std::fixed << std::setprecision(12);
    std::cout << "I = " << sum / N << '\n';
}