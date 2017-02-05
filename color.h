/* color.h
 * 01.02.2017
 */
#pragma once


#ifndef __COLOR_H_
#define __COLOR_H_

#include <string>
#include <iostream>

class color
{
public:
  /* Create constructor rgba */
  color(char r, char g, char b, char a) : r(r), g(g), b(b), a(a)
  { }
  /* Create constructor rgb */
  color(char r, char g, char b) : r(r), g(g), b(b)
  {
    a = 1;
  }
  /* Create constructor */
  color()
  {
    r = g = b = 0;
    a = 1;
  }

  /* Copy constructor */
  color(color &copyColor)
  {
    r = copyColor.r;
    g = copyColor.g;
    b = copyColor.b;
    a = copyColor.a;
  }

  ~color()
  {
    r = g = b = a = 0;
  }


private:
  char r, g, b, a; // red, green, blue and 
};


#endif /* __COLOR_H_ */

/* END OF 'color.h' FILE */