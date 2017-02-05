/* main.cpp
 * 01.02.2017
 */
#include "text.h"

int ReadWrite(char * FileName);

/*
 *
 */
int main(int argc, char *argv[])
{
  //ReadWrite("Realtime.txt");
  //ReadWrite("Realtime.doc");
  //ReadWrite("Realtime.rtf");
  //ReadWrite("Realtime.docx");

  char FileName[100];

  //scanf("%s", FileName);
  ReadWrite("check.txt");


  return 0;
}

/*
 *
 */
int ReadWrite(char * FileName)
{
  std::string str(FileName);
  std::string cod(str.substr(str.find('.'), str.size()));

  /*  */
  int (*readFunction)(FILE * Fin, text *t) = &readFunctionEmpty;
  int(*writeFunction)(char *FileName, text &t) = &writeFunctionEmpty;
  FILE *Filein = NULL;

  if (cod == ".txt")
  {
    printf("Ok: %s\n", cod.c_str());
    readFunction = &ReadWordTXT;
    if ((Filein = fopen(FileName, "rt")) == NULL)
    {
      return 0;
    }
  }
  /*
  else if (cod == ".rtf")
  {
    printf("Ok: %s\n", cod.c_str());
  }
  else if (cod == ".doc")
  {
    printf("Ok: %s\n", cod.c_str());
  }
  else
  {
    printf("Not: %s\n", cod.c_str());
  }
  */
  if (Filein == NULL)
  {
    return 0;
  }
  createFile(FileName);

  /*  */
  text word("1");
  while (!word.empty())
  {
    /**/
    readFunction(Filein, &word);
    printf("%s\n", word.c_strWord());
    /**/
    /*writeFunction(FileName, word);*/
    
  }

  //FILE *Fin = fopen(FileName, "rt");

  return 0;
}

/* END OF 'main.cpp' FILE */