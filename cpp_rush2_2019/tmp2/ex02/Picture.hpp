
#ifndef Picture_h
#define Picture_h

#include <iostream>
#include <fstream>

class Picture {
public:
  Picture(const std::string &file);
  Picture();
  ~Picture();
  bool getPictureFromFile(const std::string &file);
  Picture& operator=(Picture const& pic);
  std::string _data;

private:
};

#endif //Picture_h//
