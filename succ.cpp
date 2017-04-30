#include <stdio.h>

#include "succ.h"

Succ::Succ(int v) 
{
  m_v = v;
}


Succ::Succ(int b0, int b1, int b2, int b3, int b4, int b5, int b6, int b7, int b8)
{
  m_v =       
        b0  | (b1 << 1) | (b2 << 2) |
  (b3 << 3) | (b4 << 4) | (b5 << 5) |
  (b6 << 6) | (b7 << 7) | (b8 << 8);
}


void Succ::print()
{
  int i, j;
  printf("\n");
  for (j = 0; j < 3; ++j)
    for (i = 0; i < 3; ++i) 
      printf("%d%s", !!(m_v & (1 << (j * 3 + i))), i == 2 ? "\n" : " ");
  printf("\n");
}

