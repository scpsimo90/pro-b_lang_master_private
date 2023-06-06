/*
####  Twitter Messages  ####

John realised that many of his tweets on Twitter are under 140 characters. He wishes to make full use of the allocated space by using any of the remaining space by filling it in with lolololol until he hits 140 characters.
For example, if his message is:
___
"What a wonderful day!"
_____

He instead wants to tweet:
___
"What a wonderful day!lololololololololololololololololololololololololololololololololololololololololololololo
lolololololololololololololol"
_____

Note that the "lololol ..." part must always end with an "l". To achieve this, you may leave a space between the message and the start of the "lolololol ..." part.
That is to say:
___
"Odd"
_____

Will become:
___
"Oddlolololololololololololololololololololololololololololololololololololololololololololol
olololololololololololololololololololololololol"

# Without a space.
_____

And ...
___
"Even"
_____

Will become:
___
"Even lololololololololololololololololololololololololololololololololololololololololololololololol
olololololololololololololololololololol"

# With a space.
_____

Help John code a function that will take in the string of his message without the lololol part and return a string containing a tweet as per John's specifications.


[Examples]

___
pad("Even") ➞ "Even lololololololololololololololololololololololololololololololololololololololololololololololololololololololololololololololololololol"

pad("Odd") ➞ "Oddlolololololololololololololololololololololololololololololololololololololololololololololololololololololololololololololololololololol"

pad("I love the new challenge") ➞ "I love the new challenge lololololololololololololololololololololololololololololololololololololololololololololololololololololololololol"

pad("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus dolor purus, finibus eget magna vel, suscipit semper nibh. Quisque posuere.") ➞ "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus dolor purus, finibus eget magna vel, suscipit semper nibh. Quisque posuere."
_____



[Notes]

N/A


[formatting] [strings] 



-------------------------------------------------------------------
[Resources]
_________
std::string::at
http://www.cplusplus.com/reference/string/string/at/
Returns a reference to the character at position pos in the string. The function automatically checks whether pos is the valid position of a character in the string (i …
_________
_________
std::string::substr
http://www.cplusplus.com/reference/string/string/substr/
Returns a newly constructed string object with its value initialized to a copy of a substring of this object. The substring is the portion of the object that starts at …
_________

*/
//Your code should go here:

