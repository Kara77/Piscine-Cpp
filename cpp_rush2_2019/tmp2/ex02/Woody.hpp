
#ifndef Woody_h
#define Woody_h

#include "Toy.hpp"

class Woody: public Toy {
public:
  Woody(std::string name, std::string file);
  Woody(std::string name);
  ToyType _type;
  virtual ToyType getType() const;
  virtual std::string getName() const;
  virtual void setName(std::string const name);
  virtual void setAscii(std::string filename);
  virtual std::string getAscii() const;
  virtual Woody& operator=(Woody const& pic);

private:
  std::string _name;
  std::string _ascii;
};

#endif //Woody_h//
