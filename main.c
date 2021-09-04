#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
char name [10];
int age ;
float degree ;
int section ;
}s[10];

int main()
{
    int i ;
  strcpy(s[0].name,"ibrahim");
  s[0].age = 21 ;
  s[0].degree = 90 ;
  s[0].section = 1 ;
 // --------------------------- //
  strcpy(s[1].name,"ahmed");
  s[1].age = 21 ;
  s[1].degree = 88 ;
  s[1].section = 2 ;
  // --------------------------- //
  strcpy(s[2].name,"ali");
  s[2].age = 21 ;
  s[2].degree = 89.5 ;
  s[2].section = 3 ;
  // --------------------------- //
  strcpy(s[3].name,"hassen");
  s[3].age = 21 ;
  s[3].degree = 78 ;
  s[3].section = 4 ;
  // --------------------------- //
  strcpy(s[4].name,"mahmoud");
  s[4].age = 21 ;
  s[4].degree = 99 ;
  s[4].section = 5 ;


  for (i=0; i<5; i++)
  {
      printf("student %d\n\n name        : %s\n age         : %d\n degree      : %f\n section     : %d\n\n",i+1,s[i].name,s[i].age,s[i].degree,s[i].section );

  }

    return 0;
}


