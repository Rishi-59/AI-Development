
#include <iostream>
#include <iomanip>
#include <chrono>

int main() {
    const uint64_t iterations = 200'000'000ULL;
    const int param1 = 4;
    const int param2 = 1;

    auto start = std::chrono::high_resolution_clock::now();

    double result = 1.0;
    for (uint64_t i = 1; i <= iterations; ++i) {
        double j = static_cast<double>(i * param1 - param2);
        result -= 1.0 / j;
        j = static_cast<double>(i * param1 + param2);
        result += 1.0 / j;
    }
    result *= 4.0;

    auto end = std::chrono::high_resolution_clock::now();
    double elapsed = std::chrono::duration<double>(end - start).count();

    std::cout << std::fixed << std::setprecision(12)
              << "Result: " << result << "\n";
    std::cout << std::fixed << std::setprecision(6)
              << "Execution Time: " << elapsed
              << " seconds\n";

    return 0;
}
