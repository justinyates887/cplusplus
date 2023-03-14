What is the address-of operator?

&

How do we access the address of a variable? (Give example code)

int myNumber = 5;
cout << "Address: " << &myNumber;

How do we declare a pointer variable? (Give example code)

int myNumber = 5;
int* internalPointerVariable;
internalPointerVariable = &myNumber;

How do we assign a pointer variable the address of another variable? (Give example code)

internalPointerVariable = &myNumber2

When a pointer is not in use, what should it be pointing to?

nullptr

What is the de-reference operator?

*

How do we display the value of a variable, via a pointer pointing to it (using the dereference operator)? (Give example code)

string greeting = "Hello World!";
string* ptrString = &greeting;
cout << "Dereffed variable: " << *ptrString << endl;