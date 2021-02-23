#include <iostream>

bool hi()
{
    std::cout << "Hello World\n" << std::endl;

    return 0;
}

int number_less_than_100()
{
    std::cout << "Enter a number less than 100: ";
    int x {};
    std::cin >> x;

    if( x >= 100 )
    {
        std::cout << "Invalid input! The number has to be less than 100.\n" << std::endl;
    }

    return 0;
}