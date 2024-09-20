#include <iostream>
#include <linear_alg.h>
#include <vector>

// No need to change anything in this file!

int main(int argc, char* argv[]) {
    std::cout << "Hello world!" << std::endl;

    std::vector<double> a = {0.5, 0.5};
    std::vector<double> b = {0, 1.0};

    double proj = calculateProjection(a, b);

    std::cout << "The projection is " << proj << std::endl;
}