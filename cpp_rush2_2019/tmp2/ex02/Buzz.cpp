
#include "Buzz.hpp"
#include "Toy.hpp"

Buzz::Buzz(std::string name, std::string file): _name(name)
{
  _type = BUZZ;
  _picture = Picture(file);
}

Buzz::Buzz(std::string name): _name(name)
{
  _type = BUZZ;
  _picture = Picture("buzz.txt");
}

Toy::ToyType Buzz::getType() const
{
  return _type;
}

void Buzz::setName(std::string const name)
{
  _name = name;
}


std::string Buzz::getName() const
{
  return _name;
}

std::string Buzz::getAscii() const
{
  return _picture._data;
}

Buzz& Buzz::operator=(Buzz const& pic)
{
  if (&pic != this)
    _picture = pic._picture;
  return *this;
}


void Buzz::setAscii(std::string filename)
{
  _picture._data = filename;
}
