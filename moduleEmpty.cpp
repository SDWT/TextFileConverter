/* moduleTXT
 * 01.02.2017
 */

#include "text.h"

int readFunctionEmpty(FILE * Fin, text *t)
{
  return 0;
}

int writeFunctionEmpty(char *FileName, text &t)
{
  return 0;
}

int createFile(char *FileName)
{
  std::string str(FileName);
  std::string cod(str.substr(str.find('.'), str.size()));
  str = str.substr(0, str.find('.'));
  /* .txt */
  if (cod != ".txt")
  {
    std::string fName(str);
    fName.append(".txt");
    FILE *txt = fopen(fName.c_str(), "wt");
  }
  if (cod != ".html")
  {
    std::string fName(str);
    fName.append(".html");
    /*FILE *txt = fopen(fName.c_str(), "wt");*/
  }
  return 0;
}

int closeFile(char *FileName, text &t)
{
  /* .txt */

  /*  */
  return 0;
}

/* END OF 'main.cpp' FILE */