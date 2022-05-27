from time import perf_counter

number = 5000000000

t1_start = perf_counter()

for i in range(1, 1 + int((number+1)/2)):
    if number % i == 0:
        print(f"{i} is a factor of {number}")

t1_stop = perf_counter()        
print(f"\n Execution duration: {1000* (t1_stop-t1_start)} ms")
