#include <iostream>

int main(int argCount, char* args[]){

    /* This section of code is a static reference to three books, written to the console.*/
    std::cout << "BOOKSTORE \n" << std::endl;

    std::cout << "Title: The Enchiridion" << std::endl;
    std::cout << "Author: Epictetus" << std::endl;
    std::cout << "ISBN: 9781521560341 \n" << std::endl;

    // Book two
    std::cout << "Title: The Illiad" << std::endl;
    std::cout << "Author: Homer" << std::endl;
    std::cout << "ISBN: 9780140275360 \n" << std::endl;

    //Book Three
    std::cout << "Title: The Gay Science" << std::endl;
    std::cout << "Author: Friedrich Nietzsche" << std::endl;
    std::cout << "ISBN: 9798669217730 \n" << std::endl;

    return 0;
}