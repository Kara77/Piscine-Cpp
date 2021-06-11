/*
** EPITECH PROJECT, 2019
** ex01
** File description:
** KoalaBot hpp
*/

#ifndef KOALABOT_HPP_
#define KOALABOT_HPP_

#include <iostream>
#include "Parts.hpp"

class KoalaBot {

	public:
		KoalaBot(Arms *arms = new Arms, Legs *legs = new Legs,
                        Head *head = new Head, std::string serial = "Bob-01");
		~KoalaBot();

                void setParts(const Arms &arms);
                void setParts(const Legs &legs);
                void setParts(const Head &head);

                void swapParts(Arms &arms);
                void swapParts(Legs &legs);
                void swapParts(Head &Head);
                void informations();
                bool status();


	private:
                Arms *_arms;
                Legs *_legs;
                Head *_head;
                std::string _serial;
};

#endif /* !KOALABOT_HPP_ */