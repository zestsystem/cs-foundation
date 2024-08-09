2.
Not in C89. For / and %, if either operand is negative, 
the result of a division can be rouded either up or down.
if i = 7 and j = 9, then the value of (-i)/j could be either -1 or -2 depending on the implementation.
On the other hand, the value of -(i/j) is always -1.
In C99, the value of (-i)/j must be equal to the value of -(i/j).

9.
a) 63, 8
b) 3,2,1
c) 2,-1,3
d) 0,0,0

13. The expression ++i is equivalent to (i += 1). The value of both expression is i after the increment has been performed.
