# Work in progress
# Using multiprocessing pool

from time import perf_counter
from multiprocessing import Pool
import os

number = 5000000000
check_end = int((number+1)/2)

def calc(i):
    if number % i == 0:
            print(f"{i} is a factor of {number}")

if __name__ == '__main__':
    cpu_number = os.cpu_count();
    print(f"\nNumber of CPU: {cpu_number}")

    t1_start = perf_counter()
    
    pool = Pool(cpu_number)
    pool.map(calc, range(1,check_end))
    pool.close()

    t1_stop = perf_counter()        
    print(f"\nExecution duration: {1000* (t1_stop-t1_start)} ms")

