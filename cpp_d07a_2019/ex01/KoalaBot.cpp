/*
** EPITECH PROJECT, 2019
** ex01
** File description:
** KoalaBot cpp
*/

#include <iomanip>
#include <iostream>
#include "KoalaBot.hpp"
#include "Parts.hpp"

KoalaBot::KoalaBot(Arms *arms, Legs *legs, Head *head, std::string serial): 
    _arms(arms), _legs(legs), _head(head), _serial(serial)
{
}

KoalaBot::~KoalaBot()
{
}

void KoalaBot::setParts(const Arms &arms)
{
    *_arms = arms;
}

void KoalaBot::setParts(const Legs &legs)
{
    *_legs = legs;
}

void KoalaBot::setParts(const Head &head)
{
    *_head = head;
}

void KoalaBot::swapParts(Arms &arms)
{
    Arms temp(arms.serial(), arms.isFunctionnal());
    arms = *_arms;
    *_arms = temp;
}

void KoalaBot::swapParts(Legs &legs)
{
    Legs temp(legs.serial(), legs.isFunctionnal());
    legs = *_legs;
    *_legs = temp;
}

void KoalaBot::swapParts(Head &head)
{
    Head temp(head.serial(), head.isFunctionnal());
    head = *_head;
    *_head = temp;
}

void KoalaBot::informations()
{
    std::cout << "[KoalaBot] " << _serial << std::endl;
    _arms->informations();
    _legs->informations();
    _head->informations();
}

bool KoalaBot::status()
{
    if (_arms->isFunctionnal() && _legs->isFunctionnal() && _head->isFunctionnal())
        return (true);
    else
        return (false);
}