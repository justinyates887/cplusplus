What library do you need to #include in order to display text to the screen and get input from the keyboard?

You must include the iostream (input/output) library like so:

{ #include <iostream> }

What library do you need to #include to use setw and setprecision?

You must use the iomainp library in order to utilize these manipulators:

{ #include <iomanip> }

What is the command to display output to the console?

cout (part of the standard namespace)

What are the commands to get input from the keyboard?

cin (part of the standard namespace)

What are escape sequences? What does \t, \n, and \" do?

Escape sequences allow you to manipulate the final output of your variables.

\t adds a tab 
\n adds a new line
\" will display a double quote. without the escape, the double quote would end the working string

How do you format currency as USD?

You would need to set the precision of the float or double as 2 and include a char before the displayed output indicating the currency denomination.

How does the setw command work?

setw will declare a number of spaces in between the selected values, useful for creating columns