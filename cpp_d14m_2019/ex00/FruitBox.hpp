/*
** EPITECH PROJECT, 2019
** Fruits
** File description:
** FruitBox hpp
*/

#ifndef FRUITBOX_HPP_
	#define FRUITBOX_HPP_

#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitBox {

	public:
		FruitBox(int size);
		~FruitBox();

		int nbFruits() const;
		bool putFruit(Fruit *f);
		Fruit *pickFruit();
		FruitNode *head();

	protected:
	private:
		int _size;
		int _nbFruit;
		FruitNode *_list;
};

#endif /* !FRUITBOX_HPP_ */
