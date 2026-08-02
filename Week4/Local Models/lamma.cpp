#include <iostream>
#include <chrono>

double calculate(long long iterations, double param1, double param2) {
    double result = 0.0;

    for (long long i = 0; i < iterations; ++i) {
        result += 1.0 / (i * param1 + param2);
        result -= 1.0 / (i * param1 + 3.0);
    }

    return result;
}

int main() {
    const long long iterations = 200000000;
    const double param1 = 4.0;
    const double param2 = 1.0;

    auto start = std::chrono::high_resolution_clock::now();

    double pi = calculate(iterations, param1, param2) * 4.0;

    auto end = std::chrono::high_resolution_clock::now();

    std::cout.setf(std::ios::fixed);
    std::cout.precision(12);

    std::cout << "Result: " << pi << '\n';
    std::cout << "Execution Time: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";
}