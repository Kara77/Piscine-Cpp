
#include "Picture.hpp"
#include <string>

Picture::Picture()
{
  _data = "";
}

Picture& Picture::operator=(Picture const& pic)
{
  if (&pic != this)
    _data = pic._data;
  return *this;
}

Picture::Picture(const std::string &file)
{
    std::ifstream ifs (file, std::ifstream::in);
    if (!ifs) {
      _data = "ERROR";
    } else {
    char c = ifs.get();

    while (ifs.good()) {
      _data += c;
      c = ifs.get();
    }
    ifs.close();
    }
}

Picture::~Picture() {}

bool Picture::getPictureFromFile(const std::string &file)
{
    std::ifstream ifs (file, std::ifstream::in);

    if (!ifs) {
      return false;
    } else {
    char c = ifs.get();

    while (ifs.good()) {
      _data += c;
      c = ifs.get();
    }
    ifs.close();
    }
  return true;
}
