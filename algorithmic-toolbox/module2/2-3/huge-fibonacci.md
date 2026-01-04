https://www.youtube.com/watch?v=o1eLKODSCqw
-------------------------------------------
--------------------1----------------------
Every Fibonacci sequence modulo m eventually returns to the start: 0, 1. Once you hit 0 followed by 1 again, you have completed one full lap of the track.

    1- Example (m=3): 0,1,1,2,0,2,2,1 (then it repeats 0,1...)

    2- The length of this lap is 8. This is your "Period."

--------------------2---------------------
Shrinking the "Huge" Number

If you are asked to find the 1,000,000,000,000th number on a track that is only 8 steps long, you don't need to run a trillion steps.

You just find the remainder:
1,000,000,000,000÷8=Remainder 0

This tells you that the 1,000,000,000,000th number is exactly the same as the 0th number on the track.


--------------------------------------------------

To calculate the sequence, we don't need to save a list of every number we've found. To get the next number, you only need the last two.

Imagine two boxes on your desk: a and b.

    1- Start with a = 0 and b = 1.

    2- To get the next number: new_number = (a + b) % m.

    3- Now, move the numbers: The old b becomes the new a, and the new_number becomes the new b.

    4- Repeat.
    ----------------------------
    The period (specifically called the Pisano Period, denoted as π(m)) is the length of the repeating cycle in the Fibonacci sequence when you take every number modulo m.
    ---------------------------

