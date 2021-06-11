
#include "Woody.hpp"
#include "Toy.hpp"

Woody::Woody(std::string name, std::string file): _name(name)
{
  _type = WOODY;
  _picture = Picture(file);
}

Woody::Woody(std::string name): _name(name)
{
  _type = WOODY;
  _picture = Picture("woody.txt");
}

Toy::ToyType Woody::getType() const
{
  return _type;
}

void Woody::setName(std::string const name)
{
  _name = name;
}


std::string Woody::getName() const
{
  return _name;
}

std::string Woody::getAscii() const
{
  return _picture._data;
}

Woody& Woody::operator=(Woody const& pic)
{
  if (&pic != this)
    _picture = pic._picture;
  return *this;
}


void Woody::setAscii(std::string filename)
{
  _picture._data = filename;
}
