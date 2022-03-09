// Work in progress
// Calcualting factorials with C++
// Bug : overflow with more thn 64bit numbers

#include <iostream>
#include <chrono>
using namespace std::chrono;

unsigned long long int number = 200;

unsigned long long int fact(unsigned long long int n){
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
    
}

int main(){
    auto start = high_resolution_clock::now();

    std::cout << "factorial of " << number << " : " << fact(number) << std::endl;

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << "\n Execution duration: " << duration.count() << " us" << std::endl;

    return 0;
}
