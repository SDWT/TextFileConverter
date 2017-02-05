/* text.cpp
 * 01.02.2017
*/

#include "text.h"

/* Add word Base function */
void text::AddWord(char *str)
{
  int maxConst = 255;
  color textColor(maxConst, maxConst, maxConst), backGround(maxConst, maxConst, maxConst);
  AddWord(str, 11, textColor, backGround, false, false);
}

/* Add word function */
void text::AddWord(char *str, int newFontsize, color textColor, color backGround, bool flagCoursive, bool flagBoldNew)
{
  word = str;
  fontsize = newFontsize;
  txt = textColor;
  bgr = backGround;
  flagCour = flagCoursive;
  flagBold = flagBoldNew;
}


/* text constructor */
text::text()
{
  AddWord("");
}
/* text constructor */
text::text(char *str)
{
  AddWord(str);
}

/* text constructor */
text::text(char * str, int newFontsize, color textColor, color backGround, bool flagCoursive, bool flagBoldNew)
{
  AddWord(str, newFontsize, textColor, backGround, flagCoursive, flagBoldNew);
}

text::~text()
{
  word.clear();
}

/* function for c string of word */
char const * text::c_strWord()
{
  return word.c_str();
}

/* END OF 'main.cpp' FILE */