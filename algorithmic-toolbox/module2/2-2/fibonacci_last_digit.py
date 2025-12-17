def get_last_digit_fibonacci(n):
    if n<=1:
        return n
    previous = 0
    current = 1

    for _ in range(2, n + 1):
        previous, current = current, (previous + current) % 10

    return current

n = int(input("Enter n: "))
print(get_last_digit_fibonacci(n))
