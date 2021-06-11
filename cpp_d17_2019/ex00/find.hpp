/*
** EPITECH PROJECT, 2019
** Find me that
** File description:
** find hpp
*/

#ifndef FIND_HPP_
#define FIND_HPP_

#include <algorithm>
#include <vector>

template<typename T>
typename T::iterator do_find(T &a, int b)
{
    return(std::find(a.begin(), a.end(), b));
}

#endif /* !FIND_HPP_ */