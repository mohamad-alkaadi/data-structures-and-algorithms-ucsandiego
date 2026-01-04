def huge_fibonacci(n, m):
    a, b = 0, 1
    period = 0

    for i in range(0, m * m):
        a, b = b, (a + b) % m
        if a == 0 and b == 1:
            period = i + 1
            break

    n = n % period

    if n <= 1: return
    
    a, b = 0, 1
    for _ in range(n - 1):
        a, b = b, (a + b) % m
    return b

n, m = map(int, input().split())

print(huge_fibonacci(n, m))
