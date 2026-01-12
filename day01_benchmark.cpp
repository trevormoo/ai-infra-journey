#include <iostream>
#include <chrono>

int main() {
    std::cout << "Benchmarking M3 CPU performance...\n" << std::endl;
    
    auto start = std::chrono::high_resolution_clock::now();
    
    long long sum = 0;
    for (int i = 0; i < 100000000; i++) {
        sum += i;
    }
    
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Time: " << duration.count() << " ms" << std::endl;
    
    return 0;
}
