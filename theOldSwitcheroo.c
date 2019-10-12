#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int size = 10;

int brick[10];
int brick2[10];

int *b = &brick;
int *b2 = &brick2;

int main() {
  //generate random ints to populate array:
  int i;
  int x;
  b2 += 9; //get b2 to point to end of brick2 array.
  srand( time(NULL) );
  for (i=0;i<size;i++) {
    x = rand();
    *(b+i) = x;
    *(b2-i) = x;
  }

  //PRINT brick:
  printf("BRICK\n");
  for (i=0;i<size;i++)  {
    printf("Index %i: %i\n",i,*(b+i));
  }
  //PRINT brick2
  b2-=9; //reset b2 pointer.
  printf("\n\nBRICK2\n");
  for (i=0;i<size;i++)  {
    printf("Index %i: %i\n",i,*(b2+i));
  }
}
