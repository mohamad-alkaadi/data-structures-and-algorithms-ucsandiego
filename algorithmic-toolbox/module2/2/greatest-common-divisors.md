slow algorithm:

best <--- 0

for d from 1 to a + b:
    if a/d and b/d:
        best <--- d

return best

# The loop runs from 1 to a + b, meaning it performs (a + b) iterations.

# In each iteration, it checks whether d divides both a and b — a constant-time operation.

