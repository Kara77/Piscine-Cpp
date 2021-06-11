
#ifndef Toy_h
#define Toy_h

#include <iostream>
#include <fstream>
#include "Picture.hpp"

class Toy {
public:
  enum ToyType {
    BASIC_TOY,
    ALIEN,
    BUZZ,
    WOODY,
  };
  Toy(ToyType type, std::string name, std::string const& pic);
  Toy();
  ~Toy();
  ToyType getType() const;
  std::string getName() const;
  void setName(std::string const name);
  bool setAscii(std::string filename);
  std::string getAscii() const;
  Toy& operator=(Toy const& pic);
  ToyType _type;
  std::string _name;
  Picture _picture;


};

#endif //Toy_h//
