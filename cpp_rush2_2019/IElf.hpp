/*
** EPITECH PROJECT, 2020
** rush2
** File description:
** rush2
*/

#ifndef IElf_h
#define IElf_h

#include "Wrap.hpp"

class IElf {
public:
  virtual ~IElf();
  virtual void wrapMeThat(Wrap *wrap, Object *obj) = 0;
  virtual Wrap *INbutton(void) = 0;
  virtual void OUTbutton(Object * obj) = 0;
  virtual std::string lookTable(void) = 0;
  virtual void putOnTable(ITable *table) = 0;
  virtual void putOnCovoyerBelt(IConveyorBelt *conveyor) = 0;
};

class PapaXmasElf: public IElf {

};

#endif //IElf_h//
