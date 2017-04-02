#include "src.h"
int gval = 10;
int
main ()
{
  int x, y;
  char op;
  scanf ("%d%c%d", &x, &op, &y);	// 5+4  8*9 11-6
  switch (op)
    {
    case '+':
      printf ("%d+%d=%d\n", x, y, myadd (x, y));
      break;
    case '-':
      printf ("%d-%d=%d\n", x, y, mysub (x, y));
      break;
    case '*':
      printf ("%d*%d=%d\n", x, y, mymul (x, y));
      break;
    case '/':
      printf ("%d/%d=%d\n", x, y, mydiv (x, y));
      break;

    default:
      break;
    }
  return 0;
}
