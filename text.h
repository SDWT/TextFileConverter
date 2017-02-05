/* text.h
 * 01.02.2017
 */
#pragma once


#ifndef __TEXT_H_
#define __TEXT_H_

#include <cstdio>
#include <string>

#include "color.h"


class text
{
public:

  /* text constructor */
  text();
  /* text constructor */
  text(char *str);
  /* text constructor */
  text(char * str, int newFontsize, color textColor, color backGround, bool flagCoursive, bool flagBoldNew);

  /* text destructor */
  ~text();

  char const * c_strWord();

  /* Check word */
  bool empty() { return word.empty(); }
  /* Add word Base function */
  void AddWord(char *str);
  /* Add word function */
  void AddWord(char * str, int newFontsize, color textColor, color backGround, bool flagCoursive, bool flagBoldNew);


private:
  std::string word;        // 1 word of text
  int fontsize;            // font size
  color txt, bgr;          // text and background color
  bool flagCour, flagBold; // coursive and bold flags
};

int ReadWordTXT(FILE * Fin, text *t);

int readFunctionEmpty(FILE * Fin, text *t);
int writeFunctionEmpty(char *FileName, text &t);
int createFile(char *FileName);
int closeFile(char *FileName, text &t);

#endif /* __TEXT_H_ */

/* END OF 'text.h' FILE */