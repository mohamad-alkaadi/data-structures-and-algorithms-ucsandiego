def get_fibonacci_sum_last_digit(n):
    if n <= 1:
        return n

    n = (n + 2) % 60

    if n <= 1:
        fib_n_plus = n
    else:
        previous = 0
        current = 1
        
        for _ in range(n-1):
            previous, current = current, (previous + current) % 10
        fib_n_plus = current

    if fib_n_plus == 0:
        return 9
    else:
        return fib_n_plus - 1


get_input_n = int(input("enter a number:"))

print(get_fibonacci_sum_last_digit(get_input_n))

