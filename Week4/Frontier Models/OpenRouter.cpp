
#include <iostream>
#include <chrono>

int main() {
    const long long iterations = 200'000'000LL;
    const double param1 = 4.0;
    const double param2 = 1.0;

    auto start = std::chrono::high_resolution_clock::now();

    double result = 1.0;
    for (long long i = 1; i <= iterations; ++i) {
        double i4 = static_cast<double>(i) * param1; // i * 4.0
        double j = i4 - param2;                      // i*4 - 1
        result -= 1.0 / j;
        j = i4 + param2;                             // i*4 + 1
        result += 1.0 / j;
    }
    result *= 4.0;

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    std::printf("Result: %.12f\n", result);
    std::printf("Execution Time: %.6f seconds\n", elapsed.count());

    return 0;
}
