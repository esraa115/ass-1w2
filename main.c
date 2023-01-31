#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter number from 1:10");
    scanf ("%d",&number);

    switch(number)

    {

    case 1:
    case 3:
    case 5:
    case 7:
    case 9:

    printf("odd number");
    break;


    case 2:
    case 4:
    case 6:
    case 8:
    case 10:

      printf("even number");
      break;

      default: printf("wrong number");

    }


    }
