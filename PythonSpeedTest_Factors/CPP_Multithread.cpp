// Work in progress
// Using C++ Multithread to calculate different ranges

#include <iostream>
#include <chrono>
#include <thread>

using namespace std::chrono;

long long int number = 5000000000;
int check_start = 1;
long long int check_end = long long int((number+1)/2);

int cpu_number = 3;
long long int remain_size = check_end % cpu_number;
long long int part_size = long long int(check_end-remain_size) / cpu_number;

void calc(long long int num_start, long long int num_end){
    for(long long int i = num_start;i <= num_end ; i++){
        if(number % i == 0){
            std::cout << i << " is a factor of " << number << "\n" ;
        }
    }
}

int main(){
    auto start = high_resolution_clock::now();

    // for(long long int i=1;i <= check_end ; i++){
    //     calc(i);
    // }

    // for(long long int i=1;i <= check_end ; i++){
    //     std::thread t(calc,i);
    //     t.join();
    // }



    // std::thread t1(calc, check_start, long long int(check_end/2));
    // std::thread t2(calc, 1 + long long int(check_end/2), check_end);
    // std::thread t3(calc,50);

    // std::thread t1(calc, check_start, long long int(check_end/2));
    // std::thread t2(calc, 1 + long long int(check_end/2), check_end);
    std::cout << "\n Start: " << check_start << " End: " << long long int(check_start + part_size) << "\n";
   // std::thread t1(calc, check_start, check_start + part_size);

    std::cout << "\n Start: " << long long int(check_start + part_size + 1) << " End: " << long long int(check_start + (2 * part_size)) << "\n";
    //std::thread t2(calc, check_start + part_size + 1 , check_start + (2 * part_size));

    std::cout << "\n Start: " << long long int(check_start +  (2 * part_size) + 1) << " End: " << long long int(check_start + (3 * part_size) + remain_size) << "\n";
    //std::thread t3(calc, check_start +  (2 * part_size) + 1 , check_start + (3 * part_size) + remain_size);

   // t1.join();
    //t2.join();
   // t3.join();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    std::cout << "\n Execution duration: " << duration.count() << " ms" << std::endl;

    return 0;
}
