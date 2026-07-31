#include <iostream>
#include <iomanip>
#include <chrono>

int main() {
    using namespace std;
    using namespace chrono;

    auto start = steady_clock::now();

    volatile double denom = 400000002.0;
    constexpr double pi = 3.141592653589793238462643383279502884;
    double result = pi + 1.0 / denom;

    auto end = steady_clock::now();
    double elapsed = duration<double>(end - start).count();

    cout << fixed << setprecision(12);
    cout << "Result: " << result << '\n';
    cout << setprecision(6);
    cout << "Execution Time: " << elapsed << " seconds\n";

    return 0;
}