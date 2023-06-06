/*
####  Calculate the Missing Value with Ohm's Law  ####

Create a function that calculates the missing value of 3 inputs using Ohm's law. The inputs are v, r or i (aka: voltage, resistance and current).
Ohm's law:
___
V = R * I
_____

Return the missing value rounded to two decimal places.


[Examples]

___
ohmsLaw(12, 220, "") ➞ 0.05

ohmsLaw(230, "", 2) ➞ 115

ohmsLaw("", 220, 0.02) ➞ 4.4

ohmsLaw("", "", 10) ➞ "Invalid"

ohmsLaw(500, 50, 10) ➞ "Invalid"
_____



[Notes]

___
*) Missing values will be ""
*) If there is more than one missing value, or no missing value, return "Invalid"
*) Only numbers will be given.
___



[math] [physics] 



-------------------------------------------------------------------
[Resources]
_________
Math.round()
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Math/round
Returns the value of a number rounded to the nearest integer.
_________
_________
Array.prototype.filter()
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/filter
Creates a new array with all elements that pass the test implemented by the provided function.
_________
_________
Array.prototype.includes()
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/includes
Determines whether an array includes a certain value among its entries, returning true or false as appropriate.
_________
_________
Number.prototype.toFixed()
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Number/toFixed
Formats a number using fixed-point notation.
_________
_________
if...else
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/if...else
The if statement executes a statement if a specified condition is truthy. If the condition is falsy, another statement can be executed.
_________

*/
//Your code should go here:

