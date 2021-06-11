
#ifndef Buzz_h
#define Buzz_h

#include "Toy.hpp"

class Buzz: public Toy {
public:
  Buzz(std::string name, std::string file);
  Buzz(std::string name);
  ToyType _type;
  virtual ToyType getType() const;
  virtual std::string getName() const;
  virtual void setName(std::string const name);
  virtual void setAscii(std::string filename);
  virtual std::string getAscii() const;
  virtual Buzz& operator=(Buzz const& pic);

private:
  std::string _name;
  std::string _ascii;
};

#endif //Buzz_h//
