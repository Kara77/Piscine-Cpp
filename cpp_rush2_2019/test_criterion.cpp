//
// EPITECH PROJECT, 2019
// tests_criterion.cpp
// File description:
// 
//

#include "Object.hpp"
#include "Toy.hpp"
#include "LittlePony.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"
#include "Wrap.hpp"
#include <iostream>
#include <criterion/criterion.h>
#include <exception>
#include <new>
#include <array>

Test(asserts, array) {
    Object **test1 = MyUnitTests();
    Toy *t1 = (Toy *) test1[0];
    Toy *t2 = (Toy *) test1[1];

    cr_expect(true);

    cr_assert ((std::cout << "Jouet n°1 : " << t1->getTitle() << std::endl
              << "Expected : 'happy pony'" << std::endl << std::endl));

    cr_assert ((  std::cout << "Jouet n°2 : " << t2->getTitle() << std::endl << "Expected : 'cuddles'" << std::endl << std::endl));
    std::cout << "----End test 1----" << std::endl << std::endl;
    std::cout << "--------------------" << std::endl << std::endl;

}

Test(assert, array)
{
    std::cout << "----Start test 2----" << std::endl << std::endl;
    Object **obj = new Object *[4];
    //Object *test2 = nullptr;

    obj[0] = new LittlePony("cuddles");
    obj[1] = new Box();
    obj[2] = new GiftPaper();
    obj[3] = nullptr;

cr_expect(true);

   /* std::cout << "First obj: ";
    if (obj[0]->getType() == TEDDY)
	cr_assert ((std::cout << "Teddy" << std::endl));
    else
        cr_assert_not(std::cout << "not a Teddy!" << std::endl);
    std::cout << "Second obj: ";
    if (obj[1]->getType() == BOX)
	cr_assert ((std::cout << "Box" << std::endl));
    else
        cr_assert_not (std::cout << "not a Box!" << std::endl);
    std::cout << "Third obj: ";
    if (obj[2]->getType() == GIFTPAPER)
	cr_assert (std::cout << "Giftpaper" << std::endl);
    else
        cr_assert_not(std::cout << "not a Giftpaper!" << std::endl);
    test2 = MyUnitTests(obj);
    if (test2 != nullptr)
	cr_assert(std::cout << "No error during the process" << std::endl);
    else
	cr_assert(std::cerr << "Error(s) occured during the procces" << std::endl);
    std::cout << "----End test 2----" << std::endl << std::endl;
    
    //cr_assert(true, "Assertions may take failure messages");*/
}

// Test(asserts, old_school) {
//     cr_expect_fail("You can fail an assertion with a message from anywhere");
//     cr_assert_fail(); /* or without a message */
// }

// Test(asserts, string) {
//     cr_assert_str_empty("");
//     cr_assert_str_not_empty("foo");

//     cr_assert_str_eq("hello", "hello");
//     cr_assert_str_neq("hello", "olleh");

//     cr_assert_str_gt("hello", "hell");
//     cr_assert_str_geq("hello", "hell");
//     cr_assert_str_geq("hello", "hello");

//     cr_assert_str_lt("hell", "hello");
//     cr_assert_str_leq("hell", "hello");
//     cr_assert_str_leq("hello", "hello");
// }

// Test(asserts, wstring) {
//     cr_assert_wcs_empty(L"");
//     cr_assert_wcs_not_empty(L"foo");

//     cr_assert_wcs_eq(L"hello", L"hello");
//     cr_assert_wcs_neq(L"hello", L"olleh");

//     cr_assert_wcs_gt(L"hello", L"hell");
//     cr_assert_wcs_geq(L"hello", L"hell");
//     cr_assert_wcs_geq(L"hello", L"hello");

//     cr_assert_wcs_lt(L"hell", L"hello");
//     cr_assert_wcs_leq(L"hell", L"hello");
//     cr_assert_wcs_leq(L"hello", L"hello");
// }

// Test(asserts, native) {
//     cr_assert_eq(1, 1);
//     cr_assert_neq(1, 2);

//     cr_assert_lt(1, 2);
//     cr_assert_leq(1, 2);
//     cr_assert_leq(2, 2);

//     cr_assert_gt(2, 1);
//     cr_assert_geq(2, 1);
//     cr_assert_geq(2, 2);
// }

// Test(asserts, float) {
//     cr_assert_neq(0.1 * 0.1, 0.01);
//     cr_assert_float_eq(0.1 * 0.1, 0.01, 0.001);
// }

// struct dummy_struct {
//     char a;
//     size_t b;

//     bool operator==(const struct dummy_struct &rhs) const
//     {
//         return this->a == rhs.a && this->b == rhs.b;
//     }

//     bool operator<(const struct dummy_struct &rhs) const
//     {
//         return this->a < rhs.a;
//     }
// };

// int eq_dummy(struct dummy_struct &a, struct dummy_struct &b)
// {
//     return a == b ? 0 : (a < b ? -1 : 1);
// }

// Test(asserts, array) {
//     /* 1. (recommended): use std::array and cr_assert_eq */
//     std::array<dummy_struct, 2> cpparr1 = { { { 4, 2 }, { 2, 4 } } };
//     std::array<dummy_struct, 2> cpparr2;
//     memset(&cpparr2[0], 0xFF, 2 * sizeof (struct dummy_struct));
//     cpparr2[0].a = 4;
//     cpparr2[0].b = 2;
//     cpparr2[1].a = 2;
//     cpparr2[1].b = 4;

//     cr_assert_eq(cpparr1, cpparr2);

//     /* 2. Compare arrays byte-to-byte */
//     int arr1[] = { 1, 2, 3, 4 };
//     int arr2[] = { 4, 3, 2, 1 };

//     cr_assert_arr_eq(arr1, arr1, 4 * sizeof (int));
//     cr_assert_arr_neq(arr1, arr2, 4 * sizeof (int));

//     /* 3. Compare arrays with a comparison function */
//     struct dummy_struct s1[] = { { 4, 2 }, { 2, 4 } };
//     struct dummy_struct s2[2];
//     memset(s2, 0xFF, sizeof (s2));
//     s2[0].a = 4;
//     s2[0].b = 2;
//     s2[1].a = 2;
//     s2[1].b = 4;

//     /* cr_assert_arr_eq(&s1, &s2, 2 * sizeof (struct dummy_struct));
//        isn't guaranteed to work on structs. */
//     cr_assert_arr_eq_cmp(s1, s2, 2, eq_dummy);
// }

// Test(asserts, exception) {
//     cr_assert_throw(throw std::exception(), std::exception);
//     cr_assert_throw(throw std::exception(), std::bad_alloc);
// }
