A switch statement checks the value of a variable. What kind of relational statement is it equivalent to? (Greater than? Less than? Equal to? Not equal to?)

A switch checks a value's **equality** against certain parameters.

What does the default case do?

A default can be thought of like an else statement; it will run when no other case it matched.

What does the break statement do?

A break exits the switch loop.

What is flow-through?

Flow-through allows for a switch statement to continue evaluating statements after another case is matched. This can be dangerous, as it needs to be certain another case will match to prevent an infinite loop or code crash.

Example code: Write an example switch statement.

switch(chapter){
    case 1:
        cout << "Chapter " << chapter
        break;
    case 2:
        cout << "Chapter " << chapter
        break;
    ...
    default:
        cout << "Unknown chapter! << endl;
    
}
