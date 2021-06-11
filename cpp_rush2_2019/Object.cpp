/*
** EPITECH PROJECT, 2019
** rush2_2019
** File description:
** Object.cpp
*/

#include "Object.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Wrap.hpp"
#include "GiftPaper.hpp"
#include "Box.hpp"

Object::Object(std::string title): _title(title)
{}

Object::~Object()
{}

void Object::isTaken()
{}

std::string Object::getTitle() const
{
	return (_title);
}

Object **MyUnitTests()
{
	Object **Ret = new Object*[2]; 
	Ret[0] = new LittlePony("happy ponny");
	Ret[1] = new Teddy("cuddles");
	return (Ret);
}

Object *MyUnitTests(Object **obj)
{
	Object *ted = (Object*)obj[0];
	Box *box = (Box*)obj[1];
	GiftPaper *paper = (GiftPaper*)obj[2];

	box->wrapMeThat(ted);
    paper->wrapMeThat(box);

	return (paper);
}

/*int main()
{
	Object *tab[2];
	tab[0] = new Teddy("teddy");
	tab[1] = new Box();
	tab[2] = new GiftPaper();
    Object *test = MyUnitTests(tab);
	test[0].isTaken();
	
	return (0);
}**/