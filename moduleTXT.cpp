/* moduleTXT
 * 01.02.2017
 */

#include "text.h"

/*
 *
 */
int ReadWordTXT(FILE * Fin, text *t)
{
  char str[5000];
  if (fscanf(Fin, "%s", str) == -1)
  {
    t->AddWord("");
    return 0;
  }
  t->AddWord(str);
  return 1;
}

int WriteWordTXT(FILE * Fin, text *t)
{
  fprintf(Fin, "%s", t->c_strWord());
  return 1;
}


/* END OF 'main.cpp' FILE */