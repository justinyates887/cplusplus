What is a variable?

A variable is a place in which you can store data.

What is a data type?

A data type is the kind of data a variable is cast as. Data types for most compilers include ints (whole numbers), strings (sentances), chars (single letters or symbols), booleans (true/false), and more. These data types inform the compiler on how to interpret the contents of the variable.

What is a named constant?

A named constant is a variable that has been declared and will remain the same for the life of the program runtime.

What does an integer, float, boolean, char, and string store? Give examples of declaring and assigning values to variables with each of these data types.

An integer, or int, stores whole, numeric values. An example would be:

> int myInt = 15;

A floating point number can store decimal places, as can a double. A double is typically used for larger numbers, as it can allocate more memory.

> float myFloat = 15.505;
> double myDouble = 15.5050505050505050505;

A boolean value stores logical truths, either True or False. By default, undeclared boolean values result in true.

> bool myBoolean = True;

Chars are variables used to store singular characters or symbols. Very useful for currency. They are surrounded by singular apostraphies.

> char dollar = '$';

Strings are used to store larger text data, like sentances or paragraphs. The declared string is stored within quotation marks.

> string helloWorld = "Hello, World!";

What is an assignment statement?

An assignment statement is a reference to when a declared variable is assigned a value. The above examples are all assignment statements. This process can be done upon the declaration of the variable, or later if the assignment depends on something else:

> int myInt; //declaration
> { some code here ...}
> myInt = 12

How is it structured?

If the variable has not been declared, you must first declare the data type, then the variable name, and then use an assignment operator (such as =) to give it a value matching the declared data type. If it has already been declared, you do not need to call the data type before the variable name. It should be noted that variables are case sensative, therefore it is a good idea to check your spelling when assigning a variable after declaration.

What does increment and decrement mean? What are the three ways each you can write these statements?

Incrementing and decrementing variables means adding a certain value or removing a certain value from a the variabble. Most common with ints, you can perform these operands as such:

> int myInt = 0;
> myInt += 5; //myInt now equals five
> myInt ++; //myInt now equals six, as the ++ will increment by 1
> myInt --; //myInt returns to five
> myInt -= 5; //myInt equals zero