We want the last digit of the n‑th Fibonacci number. Instead of calculating the full Fibonacci numbers (which grow extremely large), we only keep track of their last digit at each step.

the last digit of the next Fibonacci number can be found by adding the last digits of the two before it, then keeping only the last digit of that sum.




1 2 3 5 8 13 21 34
1
1+1= 2
1+2= 3
2+3= 5
3+5= 8
5+8= 3
8+3= 1
3+1= 4
