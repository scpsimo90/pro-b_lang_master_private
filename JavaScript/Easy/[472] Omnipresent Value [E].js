/*
####  Omnipresent Value  ####

A value is omnipresent if it exists in every subarray inside the main array.
To illustrate:
___
[[3, 4], [8, 3, 2], [3], [9, 3], [5, 3], [4, 3]]
// 3 exists in every element inside this array, so is omnipresent.
_____

Create a function that determines whether an input value is omnipresent for a given array.


[Examples]

___
isOmnipresent([[1, 1], [1, 3], [5, 1], [6, 1]], 1) ➞ true

isOmnipresent([[1, 1], [1, 3], [5, 1], [6, 1]], 6) ➞ false

isOmnipresent([[5], [5], [5], [6, 5]], 5) ➞ true

isOmnipresent([[5], [5], [5], [6, 5]], 6) ➞ false
_____



[Notes]

Sub-arrays can be any length.


[algorithms] [arrays] [loops] [validation] 



-------------------------------------------------------------------
[Resources]
_________
Array.prototype.includes()
http://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/includes
Determines whether an array includes a certain value among its entries, returning true or false as appropriate.
_________
_________
Array.prototype.every()
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/every
Tests whether all elements in the array pass the test implemented by the provided function.
_________
_________
Set.prototype.has()
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Set/has
Returns a boolean indicating whether an element with the specified value exists in a Set object or not.
_________
_________
Set Object
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Set
Lets you store unique values of any type, whether primitive values or object references.
_________
_________
Array.prototype.some()
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/some
Tests whether at least one element in the array passes the test implemented by the provided function. It returns a Boolean value.
_________

*/
//Your code should go here:

