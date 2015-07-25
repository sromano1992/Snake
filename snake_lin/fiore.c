#include"mylib.h"

void fiore (char tavola[10][10])
{
	srand(time(NULL));
	int x, y;
	while(1)
	{
	   x=rand() %10;
	   y=rand() %10;
	   if (tavola[y][x]=='*')
	   {
	      continue;
	   }
	   else if (tavola[y][x]=='-')
	   {
	      tavola[y][x]='F';
	      break;
	   }
	}
}
