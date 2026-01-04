GCDs:
- put fraction a/b in simplest form
- divide numerator and denominator by d to get (a/d) / (b /d)
- need d to divide a and b with reminder of zero
- want d to be as large as possible 

definition: for integers, a and b, thir greatest common divisor of gcd(a, b) is the largest
            largest integer d so that divides both a and b

slow algorithm:

best <--- 0

for d from 1 to a + b: //it should be to min(a,b)
    if a/d and b/d:
        best <--- d

return best

# The loop runs from 1 to a + b, meaning it performs (a + b) iterations.

# In each iteration, it checks whether d divides both a and b — a constant-time operation.

