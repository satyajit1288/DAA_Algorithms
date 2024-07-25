def fibonacci_generator():
    a, b = 1, 1
    while True:
        yield a
        a, b = b, a + b

fib_gen = fibonacci_generator() # fib_gen is generator object


for _ in range(1):
    print(next(fib_gen))
