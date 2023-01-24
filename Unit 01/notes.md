1) What is the command line?


The command line is an interface that allows a user to interact with their system via text commands. These commands can
include navigating the file system, accessing kernel commands, and even writing code/text to files.


2) What does the ls program do?


The ls command lists all files and directories in the current working directory.


3) What does the pwd program do?


pwd allows your to print the name (or full file path) of your current working directory.


4) What does the cd program do?


cd allows you to navigate through directories. Using ../ takes you backwards on directory, stopping at the root. To change your working
directory, you must specify the directory you are wanting to change into.


5) What does the g++ program do?


g++ is a command that comes standard with GNU based kernels. It is a command that invokes a compiler for pre-processing and assembling code.


6) What does the TAB key do in the Shell?


Tab allows you to quickly complete a command. This is especially useful when navigating the file system. The tab will invoke up to a "crossroads"
until it needs more information on what command you are trying to run. For instance; if you want to navigate to a project_one folder, you would use cd project_one. If you also have a project two folder, the tab commands after typing "cd p" would complete "project_", but would require you to specify the next char in the path.


7) What is a .cpp file?


A .ccp file is a file that contains code written in the C++ language. This file extensions lets systems know how to try and execute and compile the codebase (if a C++ runtime environment is available).


8) What is compile/build?


Compiling, specifically, is taking the source code and beginning the runtime environment of the code. A build, more specifically, is packaging that code into a stand-alone executable file.


9) What is source code?


Source code refers to the original, written code of any program.


10) What is an executable file?


An executable file, or .exe, is a file that contains source code, packaged to run on a system without using a compiler command. It should be noted that .exe's come standard with installers, to ensure all dependencies of the program are met on the host system. .exe's are useful for packaging your code base into an easily distributable, and easily runnable entry point.


11) How do we build a C++ source code file into an executable file?


For this, we would use a Linker program. In our case we will be using g++, the built in complier.


12) How do we set the executable file's name when building with g++?


Using the -o tag, we can specify a filename for the executable


13) How do we run the executable file?


In the shell, you would call the filename in the current working directory, such as "./main.exe"


14) How do we run an executable file with additional arguments?


For additional arguments, you simply need to pass the arguments in the specified order after calling the program on the CLI


15) What does the CTRL+C command do in the Shell?


Ctl+c terminates any running processes in the terminal.


16) Zork Q1: What were your impressions of the interface? Was it easy to use? Hard to use? What would you have changed about it to make it more user friendly?


The interface sucked. For dialog based games, giving users a few prompt choices would make the game esier to navigate. It took me a few seconds to figure out what I was supposed to do.


17) Zork Q2: Paste the results of pwd cmd


/home/runner/U01EX-Exploring-Software-justinytaes887


18) 3. From the ~/U01EX-Exploring-Software$ path, use cd Program3 and then ls. Write down the results in your notes.


program.cpp


19) From the ~/U01EX-Exploring-Software/Program3$ path, use cd .. to go backwards. Then use the cd command to go into Program4 and display its contents. Write down Program4's ls results in your notes.


sale.cpp temp.cpp


20) 5. Navigate into the Program5 folder using the commands we've learned. Use the ls command to get the list of items in the Program5 folder and add it to your notes.


zombies.cpp


21) Copy the Shell commands where you built and ran this program and paste the commands into your notes, similar to the example run above.


~/U01EX-Exploring-Software-justinytaes887/Program3$ g++ program.cpp -o HelloProgram.exe && wait && ./HelloProgram.exe
Hello, world!
~/U01EX-Exploring-Software-justinytaes887/Program3$


22) Run the temp.exe program to convert 100 F to Celsius and paste the result in your notes. Run the temp.exe program to convert 10 C to Fahrenheit and paste the result in your notes.


~/U01EX-Exploring-Software-justinytaes887/Program4$ ./temp.exe 100 F && ./temp.exe 10 C
100 F = 37.7778 C
10 C = 42 F


23) Run the sale.exe program to find out how much a $75.50 item would cost after a 35% off sale. Paste the results into your notes.


~/U01EX-Exploring-Software-justinytaes887/Program4$ g++ sale.cpp -o sale.exe && wait && ./sale.exe 75.50 35
Original price: $75.50
Sale amount:    %35.00
Amount off:    -$26.42
Final price:    $49.08


24) What were your impressions of the interface? Was it easy to use? Hard to use? What would you have changed about it to make it more user friendly?


It was significantly better than the retro emulation. The suggestions I had to improve the retro game were implemented by your program.


25) Did the program allow invalid commands to be entered? What happened when invalid input was detected? Do you think this should be changed?


It did not. Your code verified the input, and if the input was improper it gave an error command, reset the console, and recalled the function.