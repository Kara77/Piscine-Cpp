/*
** EPITECH PROJECT, 2020
** rush2
** File description:
** rush2
*/

#include "IElf.hpp"

void IElf::wrapMeThat(Wrap *wrap, Object *obj)
{
  wrap->_full = true;
  wrap->_obj = obj;
}
