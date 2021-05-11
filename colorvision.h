#ifndef ColorVis_H //Pre-processor directives
#define ColorVis_H
#include <string>
#include <iostream>

using std::string;

class Colors{
  private:
    string colorgen;
  public:
    Colors(string actualColor) : colorgen{actualColor} {}
    
    string display();
};

#endif