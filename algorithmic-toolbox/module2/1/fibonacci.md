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
