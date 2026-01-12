to find the last digit of the sum we need (Fn+2 − 1)(mod10)

Since n might be huge, we cannot iterate n+2 times to find the Fibonacci number. We use the Pisano Period

------------Why do we increase by 2?

n | Fibonacci Fn | Sum (Sn) |   Fn+2   |   Pattern observed
0   0              0            F2 = 1     1 − 1 = 0
1   1              1            F2 = 2     2 − 1 = 1
2   1              2            F2 = 3     3 − 1 = 2
3   2              4            F2 = 5     5 − 1 = 4
4   3              7            F2 = 8     8 − 1 = 7

he Sum up to n is always exactly one less than the (n+2)-th Fibonacci number

Mathematically, this is written as:
i=0∑n Fi = Fn+2 − 1

this mean from i=0 to n

-------------Why do we use mod 10?
We use mod 10 because the problem specifically asks for the "Last Digit." In our decimal system, the last digit of any number is simply the remainder when you divide that number by 10.

    25÷10=2 remainder 5

    1,078÷10=107 remainder 8

note: The Pisano Period for m=10 is exactly 60

-------------When do we stop increasing by 2?

We only increase by 2 at the very beginning to find our "target" Fibonacci index. Once we have that index (n+2), we use the Pisano Period (which is 60 for modulo 10) to shrink that index down to a manageable size.
