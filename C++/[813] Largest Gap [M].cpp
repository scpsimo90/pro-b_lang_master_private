/*
####  Largest Gap  ####

Given an array of integers, return the largest gap between elements of the sorted version of that array.
Here's an illustrative example. Consider the array:
___
[9, 4, 26, 26, 0, 0, 5, 20, 6, 25, 5]
_____

... which, after sorting, becomes the array:
___
[0, 0, 4, 5, 5, 6, 9, 20, 25, 26, 26]
_____

... so that we now see that the largest gap in the array is the gap of 11 between 9 and 20.


[Examples]

___
largestGap([9, 4, 26, 26, 0, 0, 5, 20, 6, 25, 5]) ➞ 11
// After sorting get [0, 0, 4, 5, 5, 6, 9, 20, 25, 26, 26]
// Largest gap of 11 between 9 and 20

largestGap([14, 13, 7, 1, 4, 12, 3, 7, 7, 12, 11, 5, 7]) ➞ 4
// After sorting get [1, 3, 4, 5, 7, 7, 7, 7, 11, 12, 12, 13, 14]
// Largest gap of 4 between 7 and 11

largestGap([13, 3, 8, 5, 5, 2, 13, 6, 14, 2, 11, 4, 10, 8, 1, 9]) ➞ 2
// After sorting get [1, 2, 2, 3, 4, 5, 5, 6, 8, 8, 9, 10, 11, 13, 13, 14]
// Largest gap of 2 between 6 and 8
_____



[Notes]

N/A


[arrays] [math] [numbers] [sorting] 



-------------------------------------------------------------------
[Resources]
_________
std::vector
http://www.cplusplus.com/reference/vector/vector/
Are sequence containers representing arrays that can change in size. Just like arrays, vectors use contiguous storage locations for their elements, which means that th …
_________
_________
std::sort()
https://www.geeksforgeeks.org/sort-c-stl/
We have discussed qsort() in C. C++ STL provides a similar function sort that sorts a vector or array (items with random access). It generally takes two parameters , …
_________

*/
//Your code should go here:

