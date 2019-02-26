#include <iostream>
#include "bstbag.h"

int main()
{
    //std::cout << "Hello, World!" << std::endl;

    data_structures_assignment6::bag<int> test;

    test.insert(4);
    test.insert(95);
    test.insert(95);

    std::cout << test.count(4) << std::endl;

    std::cout << "Hello, World!" << std::endl;

    return 0;
}