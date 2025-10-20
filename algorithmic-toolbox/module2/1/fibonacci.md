Fibonacci numbers: 
it is a sequence of natural numbers: 
    The 0th element of the sequence is 0. 
    The 1st element is 1.
    And from thereon, each element is the sum of the previous two. 
example:
0 + 1 = 1. 
1 + 1 = 2 
1 + 2 = 3
2 + 3 = 5

==> the sequance is 0,1,1,2,3,5 ....


fn ==> { 0,              n = 0, ## if n is 0 we return 0
       { 1,              n = 1, ## if n is 1 we return 1
       { F(n-1) + F(n-2) n > 1  ## after the first position we start counting as the following

this means: 
if n <= 1:
    return n
else:
    return FibRecurs( n - 1 ) + FivRecurs( n - 2 )



to calculate the time complexity:

if n <= 1:

check if n <= 1 --------> this is 1 line
retrun n        --------> this is 1 line

the total is    --------> 2 lines

---------------------------------------------------
if n >= 2:

check if n >= 1                          --------> this is 1 line
goes to else                             --------> this is 1 line
return inside else                       --------> this is 1 line
runs 2 recursive functions in the return --------> T ( n - 1 ) + T ( n - 2 )

the total is                             --------> 3 + T ( n - 1 ) + T ( n - 2 )


note: FibRecurs( n - 1 ) + FivRecurs( n - 2 ) is the same as T ( n - 1 ) + T ( n - 2 )

---------------------------------------------------

Running Time


           { 2                                , if n <= 1
==> T(n) = {
           { 3 + T ( n - 1 ) + T ( n - 2 )    , else


Therefore T(n) >= Fn

this algorithm is very slow
--------------------------------------------------
how do we calculate this by hand?

0 + 1 = 1
1 + 1 = 2
1 + 2 = 3
2 + 3 = 5
3 + 5 = 8

==> 0, 1, 1, 2, 3, 5, 8

if we have all the previous numbers written down we don't to use the reqursive calls, that was used before

----------------------------------------------
we create an array F
the initial conditions: 
    F[0]  <-- 0
    F[1]  <-- 1

for i from 2 to n:
    F[i]  <-- F[i-1] + F[i-2]

return F[n]
-----------------------------------------------
the count of operation:

create an array F ----> 1 operation
F[0]  <-- 0  ----> 1 operation // assignemnt
F[1]  <-- 1  ----> 1 operation // assignment  

for i from 2 to n:  // Iterations  n - 2 and we add 1  becouse n is included ==> n - 2 + 1 = n - 1
                                                                             ==> n-1 iteration
    F[i]  <-- F[i-1] + F[i-2]  ----> 2 operations per iteration // addition and assignment 
                                     # for each i, it calculates F[i] by adding the two previous  Fibonacci numbers
                               ----> 2op * (n-1) iteration = 2 (n-1) 

return F[n] ----> 1 operation


---> total is ----> 2 . ( n - 1 ) + 1 + 1 + 1 + 1 = 2n - 2 + 1 + 1 + 1 + 1 = 2n + 2


ex:
if T(100) ==> 2(100) + 2 = 202

---------------------------------------------


