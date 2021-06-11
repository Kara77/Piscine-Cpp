//
// EPITECH PROJECT, 2019
// Rush2
// File description:
// main.cpp
//

#include "Object.hpp"
#include "Toy.hpp"
#include "LittlePony.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"
#include "Wrap.hpp"
#include <iostream>
#include <criterion>

int main()
{
    // TEST 1 //
    
    std::cout << "----Start test 1----" << std::endl << std::endl;
    Object **test1 = MyUnitTests();
    Toy *t1 = (Toy *) test1[0];
    Toy *t2 = (Toy *) test1[1];

    std::cout << "Jouet n°1 : " << t1->getTitle() << std::endl
              << "Expected : 'happy pony'" << std::endl << std::endl;
    std::cout << "Jouet n°2 : " << t2->getTitle() << std::endl
              << "Expected : 'cuddles'" << std::endl << std::endl;
    std::cout << "----End test 1----" << std::endl << std::endl;
    std::cout << "--------------------" << std::endl << std::endl;

    // TEST 2 //
    return 0;
}
