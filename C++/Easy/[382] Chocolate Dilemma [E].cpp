/*
####  Chocolate Dilemma  ####

Two sisters are eating chocolate, whose pieces are represented as subarrays of [l x w].
Write a function that returns true if the total area of chocolate is the same for each sister.
To illustrate:
___
testFairness([[4, 3], [2, 4], [1, 2]],
[[6, 2], [4, 2], [1, 1], [1, 1]])
➞ true 

// Agatha's pieces: [4, 3], [2, 4], [1, 2]
// Bertha's pieces: [6, 2], [4, 2], [1, 1], [1, 1]

// Total area of Agatha's chocolate
// 4x3 + 2x4 + 1x2 = 12 + 8 + 2 = 22

// Total area of Bertha's chocolate is:
// 6x2 + 4x2 + 1x1 + 1x1 = 12 + 8 + 1 + 1 = 22
_____



[Examples]

___
testFairness([[1, 2], [2, 1]], [[2, 2]]) ➞ true

testFairness([[1, 2], [2, 1]], [[2, 2], [4, 4]]) ➞ false

testFairness([[2, 2], [2, 2], [2, 2], [2, 2]], [[4, 4]]) ➞ true

testFairness([[1, 5], [6, 3], [1, 1]], [[7, 1], [2, 2], [1, 1]]) ➞ false
_____



[Notes]

N/A


[arrays] [conditions] 



-------------------------------------------------------------------
[Resources]
_________
std::accumulate
http://www.cplusplus.com/reference/numeric/accumulate/?kw=accumulate
Returns the result of accumulating all the values in the range [first,last) to init. The default operation is to add the elements up, but a different operation can be s …
_________
_________
Lambda Expressions in C++
https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=vs-2019
A convenient way of defining an anonymous function object (a closure) right at the location where it is invoked or passed as an argument to a function. Typically lambda …
_________

*/
//Your code should go here:

