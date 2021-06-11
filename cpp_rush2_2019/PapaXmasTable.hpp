/*
** EPITECH PROJECT, 2019
** rush2
** File description:
** rush2
*/

#include "ITable.hpp"

class PapaXmasTable : public ITable
{
    public:
        PapaXmasTable();
        ~PapaXmasTable();
        void collapse();
        Object *take(int pos);
        void setCharge(Object *in);
        std::vector<Object*> getCharge();

    private :
        std::vector<Object*> charge;
};

ITable *createTable();