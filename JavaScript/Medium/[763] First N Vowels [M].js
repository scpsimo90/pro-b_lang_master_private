/*
####  First N Vowels  ####

Write a function that returns the first n vowels of a string.


[Examples]

___
firstNVowels("sharpening skills", 3) ➞ "aei"

firstNVowels("major league", 5) ➞ "aoeau"

firstNVowels("hostess", 5) ➞ "invalid"
_____



[Notes]

___
*) Return "invalid" if the n exceeds the number of vowels in a string.
*) Vowels are: a, e, i, o, u
___



[loops] [regex] [strings] 



-------------------------------------------------------------------
[Resources]
_________
Array.prototype.filter()
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/filter
Creates a new array with all elements that pass the test implemented by the provided function.
_________
_________
Array.prototype.slice()
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/slice
Returns a shallow copy of a portion of an array into a new array object selected from begin to end (end not included) where begin and end represent the index of items i …
_________
_________
TypedArray.prototype.join()
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/TypedArray/join
Joins all elements of an array into a string. This method has the same algorithm as Array.prototype.join(). TypedArray is one of the typed array types here.
_________
_________
String​.prototype​.match()
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/match
Retrieves the result of matching a string against a regular expression.
_________
_________
String​.prototype​.includes()
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/includes
Determines whether one string may be found within another string, returning true or false as appropriate.
_________
_________
RegExp Constructor
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/RegExp
Creates a regular expression object for matching text with a pattern.
_________
_________
Array​.prototype​.reduce()
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/Reduce
Executes a reducer function (that you provide) on each member of the array resulting in a single output value.
_________

*/
//Your code should go here:

