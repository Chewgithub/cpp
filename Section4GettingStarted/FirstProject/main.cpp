#include <iostream>
extern int x;
int main()
{
    int favorite_number;

    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cout << x;
    std::cin >> favorite_number;
    std::cout << "Amazing!! That's my favorite number too!";

    return 0;
}

