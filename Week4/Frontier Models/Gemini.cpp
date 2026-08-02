
#include <iostream> // For std::cout, std::endl
#include <iomanip>  // For std::fixed, std::setprecision
#include <chrono>   // For std::chrono::high_resolution_clock and duration

// Function to perform the calculation
// The original Python loop calculates:
// result = result - (1 / (i * param1 - param2)) + (1 / (i * param1 + param2))
//
// This can be algebraically simplified:
// Let X = i * param1, P = param2
// term = (1 / (X + P)) - (1 / (X - P))
// term = ((X - P) - (X + P)) / ((X + P) * (X - P))
// term = (-2 * P) / (X*X - P*P)
//
// This simplification reduces the number of floating-point operations per iteration,
// leading to significantly faster execution.
double calculate(int iterations, int param1, int param2) {
    double result = 1.0;

    // Convert integer parameters to double once to avoid repeated casts inside the loop
    double p1_double = static_cast<double>(param1);
    double p2_double = static_cast<double>(param2);

    // Pre-calculate constant parts of the simplified term
    double term_numerator = -2.0 * p2_double;
    double p2_squared = p2_double * p2_double;

    for (int i = 1; i <= iterations; ++i) {
        // 'i' will be implicitly promoted to double for multiplication with p1_double
        double X = i * p1_double;
        double term_denominator = X * X - p2_squared;

        // Add the simplified term to the result
        result += term_numerator / term_denominator;
    }
    return result;
}

int main() {
    // Untie C++ standard streams from C stdio for potentially faster I/O.
    // This is good practice for performance-critical applications,
    // though for this specific problem with minimal output, the impact is small.
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    // Record the start time using a high-resolution clock
    auto start_time = std::chrono::high_resolution_clock::now();

    // Call the calculate function with the specified parameters
    // The iteration count 200,000,000 fits comfortably within a 32-bit int.
    double result = calculate(200000000, 4, 1) * 4;

    // Record the end time
    auto end_time = std::chrono::high_resolution_clock::now();

    // Calculate the duration in seconds
    std::chrono::duration<double> duration = end_time - start_time;

    // Print the final result, formatted to 12 decimal places
    std::cout << "Result: " << std::fixed << std::setprecision(12) << result << std::endl;

    // Print the execution time, formatted to 6 decimal places
    std::cout << "Execution Time: " << std::fixed << std::setprecision(6) << duration.count() << " seconds" << std::endl;

    return 0;
}
