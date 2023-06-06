/*
####  One, Two, Skip a Few  ####

Create a function which calculates how many numbers are missing from an ordered number line. This number line starts at the first value of the array, and increases by 1 to the end of the number line, ending at the last value of the array.
___
howManyMissing([1, 2, 3, 8, 9]) ➞ 4

// The number line starts at 1 and ends at 9 (so the numbers 0 and 10 aren't missing from it).
// The numbers missing from this line are 4, 5, 6, and 7.
// 4 numbers are missing.
_____



[Examples]

___
howManyMissing([1, 3]) ➞ 1

howManyMissing([7, 10, 11, 12]) ➞ 2

howManyMissing([1, 3, 5, 7, 9, 11]) ➞ 5

howManyMissing([5, 6, 7, 8]) ➞ 0
_____



[Notes]

If the number line is complete, or the array is empty, return 0.


[arrays] [numbers] 



-------------------------------------------------------------------
[Resources]
_________
std::vector
http://www.cplusplus.com/reference/vector/vector/
Are sequence containers representing arrays that can change in size. Just like arrays, vectors use contiguous storage locations for their elements, which means that th …
_________

*/
//Your code should go here:

