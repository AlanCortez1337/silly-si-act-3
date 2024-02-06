#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "book.hpp"

std::pair<std::string, int> getInput();
//////////////////////////////////////////////////////////////////////////////
// >⭐TODO: WRITE A RECURSIVE FUNCTION:
// This function should loop through the vector of book pointers, and using the
// targetValue see if both the ISBN and book name exist in the vector
// if it does return a pointer to that book, else return nullptr

// > 📚 General Guide:
// > Start by discussing what your function prototype should include
// > Discuss what your base case should be
// > Discuss how your recursive case should look like
//////////////////////////////////////////////////////////////////////////////

int main()
{
    Book tgg("The Great Gatsby", 975, 4.99);
    Book tkamb("To Kill a Mockingbird", 948, 9.99);
    Book hpatps("Harry Potter and the Philosopher's Stone", 923, 12.00);
    Book thg("The Hunger Games", 902, 20.10);
    Book tcitr("The Catcher in the Rye", 916, 23.09);

    std::vector<Book *> bookShelf = {&tgg, &tkamb, &hpatps, &thg, &tcitr};

    std::pair<std::string, int> targetValue = getInput();

    // ⭐TODO: call your recursive function, and store the result in a Book*

    return 0;
}

std::pair<std::string, int> getInput()
{
    int ISBN = 00000000000000;
    std::string name = "NONE";

    std::cout << "Welcome to the library search!" << std::endl;
    std::cout << "What is the name of the book?" << std::endl;
    std::getline(std::cin, name);
    std::cout << "What is the ISBN of the book?" << std::endl;
    std::cin >> ISBN;

    return {name, ISBN};
}