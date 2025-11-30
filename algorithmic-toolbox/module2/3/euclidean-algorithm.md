GCD
for integers a and b, thir greatest common divisor or gcd(a,b) is the largest d so that d divides both a and b


input:    Integers a,b >= 0

output:   gcd(a,b)

Key Lemma: When studying algorithms, a key lemma is a crucial supporting fact or property that simplifies the problem. It often reveals the structure of the solution and makes the algorithm efficient.


key lemma:
let a' be the reminder when a is divided by b, then:
    gcd(a,b) = gcd(a',b) = gcd(b, a')

proof:
        a = a' + bq for some q     (q is a multiple of b eg.. 3b)

        d divides a and b if and only if it divides a' and b


eclidean agorithm:

Function EuclidGCD(a, b):
    
    if b = 0:
        return a                                                // base case
    a' <-- the reminder when a is divided by b
    return EuclidGCD(b, a')


Example: GCD of 48 and 18

EuclidGCD(48, 18) → remainder of 48 ÷ 18 is 12 → call EuclidGCD(18, 12)

EuclidGCD(18, 12) → remainder of 18 ÷ 12 is 6 → call EuclidGCD(12, 6)

EuclidGCD(12, 6) → remainder of 12 ÷ 6 is 0 → call EuclidGCD(6, 0)

EuclidGCD(6, 0) → base case → return 6

✅ So, GCD(48, 18) = 6



runtime:

- each step reduces the size of numbers by about a factor of 2
- takes about log(ab) steps
    The number of steps required to compute the GCD of two numbers 𝑎 and 𝑏 is proportional to the logarithm of their product: log(𝑎𝑏)
    
    This is because each step roughly halves the size of the numbers, and logarithms measure how many times you can divide before reaching a small number.

ex:
- Even if you're working with extremely large numbers (like 100-digit integers), the Euclidean Algorithm only needs around 600 steps to find the GCD. That’s because log(𝑎𝑏) for 100-digit numbers is roughly 600.

- Every step of the algorithm involves just one division operation (with remainder). No complex operations, no loops over all possible divisors — just divide and recurse.
