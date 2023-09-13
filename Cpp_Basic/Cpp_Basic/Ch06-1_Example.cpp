﻿#include "io.h"

void IndexChar()
{
  char Word[20];
  int number;
  
  cout << "원하는 단어를 입력해주세요 : ";
  cin >> Word;

  cout << "출력을 원하는 자리 수를 입력해주세요 : ";
  cin >> number;

  cout << Word[number-1];
  
}

void AlphaNumber()
{
  char Word[20]; // 적당히 넉넉하게 크기 선언 
  int WordSize = sizeof(Word)-1;
  
  cout << "원하는 단어를 입력해주세요 : ";
  cin >> Word;

  char Alpha[] = "abcdefghijklmnopqrstuvwxyz";
  int AlphaSize = sizeof(Alpha)-1;

  int Check[AlphaSize];
  for(int i=0; i<AlphaSize; i++)
    {
      Check[i] = -1;
    }
  
  for(int i=0; i<(WordSize); i++)
    {
      for(int j=0; j<(AlphaSize); j++)
        {
          if(Word[i] == Alpha[j])
          {
            if(Check[j] == -1)
            {
              Check[j] = i; 
            }
          }
        }
    }
  
  for(int i=0; i<AlphaSize; i++)
    {
      cout << Check[i] << " ";
    }
}