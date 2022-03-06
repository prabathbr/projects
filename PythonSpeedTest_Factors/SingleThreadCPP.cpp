#include <iostream>
#include <chrono>
using namespace std::chrono;

long long int number = 5000000000;

int main(){
    auto start = high_resolution_clock::now();

    for(long long int i=1;i <= long long int(number/2); i++){
        if(number % i == 0){
            std::cout << i << " is a factor of " << number << std::endl;
        }
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    std::cout << "\n Execution duration: " << duration.count() << " ms" << std::endl;

    return 0;
}
