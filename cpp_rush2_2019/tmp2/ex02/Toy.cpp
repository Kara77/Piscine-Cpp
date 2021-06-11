
#include "Toy.hpp"

Toy& Toy::operator=(Toy const& pic)
{
  if (&pic != this)
    _picture = pic._picture;
  return *this;
}

Toy::Toy(ToyType type, std::string name, std::string const& pic)
{
  _name = name;
  _type = type;
  _picture = Picture(pic);
}

Toy::Toy()
{
  _type = BASIC_TOY;
  _name = "toy";
  _picture = Picture();
}

Toy::~Toy() {}

Toy::ToyType Toy::getType() const
{
  return _type;
}

void Toy::setName(std::string const name)
{
  _name = name;
}


std::string Toy::getName() const
{
  return _name;
}

std::string Toy::getAscii() const
{
  return _picture._data;
}

bool Toy::setAscii(std::string filename)
{
  return _picture.getPictureFromFile(filename);
}
