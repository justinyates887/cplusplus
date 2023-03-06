What is a struct?

A structure is an object that allows you to store like variables.

Write down an example of a struct declaration.

struct Example {
    string exampleOne;
    stirng exampleTwo;
}

Write down an example of declaring a variable whose data type is some struct.

Example one; //Declaration only

What kind of file should structs go in?

.h (Header files)

You must include file guards in .h files to avoid erros
#ifndef _STRUCTNAME
#define _STRUCTNAME

and at the end:
#endif

You must also #include your .h file "StructFile.h

What is an object?

An object is a particular instance of a class or struct that had its own unique identifiers based on the submethods and variables of the class it belongs to.

What does the dot operator do?

The dot oiperator accesses a submethod of the object, calling upon built in methods or variables native to that object.

What is a member variable?

A variable declared in a class definition