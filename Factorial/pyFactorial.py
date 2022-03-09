from time import perf_counter

number = 20

def fact(n):
    if (n==1):
        return 1
    else:
        return n*fact(n-1)

t1_start = perf_counter()

print("factorial of {} : {}".format(number, fact(number)))

t1_stop = perf_counter()        
print(f"\n Execution duration: {1000*1000* (t1_stop-t1_start)} us")
