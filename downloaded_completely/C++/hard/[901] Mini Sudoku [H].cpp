/*
####  Mini Sudoku  ####

A Sudoku is a 9x9 grid that is completed when every 3x3 square, row and column consists of the numbers 1-9.
For this task, you will be given a completed 3x3 square, in the form of a two-dimensional array. Create a function that checks to make sure this 3x3 square contains each number from 1-9 exactly once. Make sure there are no duplicates, and no numbers outside this range.


[Examples]

___
isMiniSudoku([[1, 3, 2], [9, 7, 8], [4, 5, 6]]) ➞ true

isMiniSudoku([[1, 1, 3], [6, 5, 4], [8, 7, 9]]) ➞ false
// The 1 is repeated twice 

isMiniSudoku([[0, 1, 2], [6, 4, 5], [9, 8, 7]]) ➞ false
// The 0 is included (outside range)

isMiniSudoku([[8, 9, 2], [5, 6, 1], [3, 7, 4]]) ➞ true 
_____



[Notes]

N/A


[arrays] [games] [validation] 



-------------------------------------------------------------------
[Resources]
_________
std::all_of
https://www.cplusplus.com/reference/algorithm/all_of/
Test condition on all elements in range.
_________
_________
Vector in C++ STL
https://www.geeksforgeeks.org/vector-in-cpp-stl/
Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automaticall …
_________

*/
//Your code should go here:

