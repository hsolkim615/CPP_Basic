#include "io.h"

void String()
{
  char a = 'a';

  char Hello[5] = {'H','E','L','L','O'};

  char World[6] = "WORLD"; // '\0' 문자가 마지막에 포함됨, 때문에 원래 크기보다 1이 커짐

  char b[] = "Hello World";

  int Size = sizeof(b); // sizeof는 배열의 갯수를 세서 그 수를 리턴해 준다. 

  for(int i=0; i<(Size-1); i++)
    {
      cout << b[i]+1 << endl;
    }
}