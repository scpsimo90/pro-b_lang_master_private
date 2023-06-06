/*
####  Minimal I: If Boolean Then Boolean  ####

In this series we're going to see common redundancies and superfluities that make our code unnecessarily complicated and less readable, and we're going to learn how to avoid them.
In line with the spirit of the series, we can summarize the general rules of minimalist code in two simple principles:
___
*) Keep your code clean and readable.
*) While not violating the first principle: get rid of everything superfluous.
___

In order to achieve this you should:
___
*) Deepen your knowledge of logics.
*) Deepen your understanding of the particular language you're coding with.
___

I would also add: observe and learn from the pros. Make a habit of checking the Solutions tab after solving a challenge on Edabit. There is absolutely nothing wrong in assimilating features of someone else's coding style, especially if yours is not yet fully developed.


[Goal]

In the Code tab you will find a code that is missing a single character in order to pass the tests. However, YOUR GOAL is to submit a function as minimalist as possible. Use the tips in the Tips section down below.
Write a function that returns true if the given integer is even, and false if it's odd.


[Tips]

Using an if statement in order to return boolean or to set a variable to a boolean is redundant.
A function that returns true if a person's age is 18 or greater and false otherwise, could be written as:
___
bool legalAge(int age) {
  if (age >= 18)
    return true;
  else
    return false;
}
_____

Notice that age >= 18 will already give us a boolean (true or false). This means that the function can be written in a much simpler and cleaner way:
___
bool legalAge(int age) {
  return (age >= 18);
}
_____



[Notes]

___
*) This is an open series: there isn't a definite list of features for the challenges. Please, do not hesitate to leave your suggestions in the Comment tab.
*) Readability is indeed a subjective concept. Let's discuss it! Feel free to leave your opinion in the Comments tab.
*) You can find all the exercises in this series over here.
___



[conditions] [language_fundamentals] [logic] [validation] 



-------------------------------------------------------------------
[Resources]
_________
Boolean Operations
http://www.cplusplus.com/doc/boolean/
A bit is the minimum amount of information that we can imagine, since it only stores either value 1 or 0, which represents either YES or NO, activated or deactivated, t …
_________
_________
Flipping a Boolean Value Upon User Entry
http://www.cplusplus.com/forum/beginner/221868/
You can change a Boolean many ways. Without showing a bunch of nonsense stuff: you can say foo = !foo; //! is logical not in c++, same as above. If foo is true, not t …
_________
_________
Operators
https://www.cplusplus.com/doc/tutorial/operators/
Once introduced to variables and constants, we can begin to operate with them by using operators. What follows is a complete list of operators. At this point, it is lik …
_________
_________
Statements
http://www.cplusplus.com/doc/tutorial/control/
Is each of the individual instructions of a program, like the variable declarations and expressions seen in previous sections. They always end with a semicolon (;), and …
_________
_________
Function Syntax
http://www.cplusplus.com/doc/tutorial/functions/
Allow to structure programs in segments of code to perform individual tasks. In C++, a function is a group of statements that is given a name, and which can be called …
_________

*/
//Your code should go here:

