// Program to print even or odd
#include <iostream>

int main (void)
{
    int firstPage, lastPage;

    std::cout << "Type fist page: ";
    std::cin >> firstPage;
    std::cout << "Type last page: ";
    std::cin >> lastPage;
    std::cout << "\n";

    int i = firstPage;
    while (i < lastPage && i > 0)
    {
        std::cout << i << ", ";
        i += 2;
    }
    if (i == lastPage)
    {
        std::cout << i << "\n\n";
    }
    return 0;
}