/*
** EPITECH PROJECT, 2019
** rush2
** File description:
** PapaXmax
*/

#include "Object.hpp"
#include "IConveyorBelt.hpp"

class PapaXmasConveyorBelt : public IConveyorBelt {
	
	private:
		bool _full;
		Object *objectOnConv;

	public:
		PapaXmasConveyorBelt();
		~PapaXmasConveyorBelt();
		int getFull() const;
		void setFull(bool full);
		Object *getObject() const;
		void setObject(Object *object);
};

IConveyorBelt *createConveyorBelt();