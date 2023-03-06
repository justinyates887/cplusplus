### File input

What library do you need to #include in order to have a file loader?

#include <fstream> (Filestream)

When creating a file variable to read data from a text file, what data type should that variable be?

The variable is of type object: ifstream.

How do you open a text file for an input file stream?

//First, declare your object
ifstream fileOne;

//Open file with .open() method
fileOne.open("exampleFile.txt")

How do you check if loading the file failed?



Give an example of how to read string and numeric data from a text file into variables in your program.



Write down how to use a while loop to read in every word or every line of text from a text file. (See example code)

string buffer;
while(getline(fileOne, buffer))
{
    cout << buffer << endl;
}

### File output

What library do you need to #include in order to write out to files?

#include <fstream>

When creating a file variable to write data to a text file with, what data type should the variable be?

The variable is of type object: ofstream.

What function is used to open a text file for an output file stream? Give some example code.

//First, declare your object
ofstream fileOne; 

//Open file with .open() method
fileOne.open("exampleFile.txt")

Give an example of how to write some text and variable values to a file via an output file stream.

fileOne << "Hello, World! << endl