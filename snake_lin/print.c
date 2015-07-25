#include"mylib.h"

void print(char tavola[10][10], int pnt)
{
	int i, j;
	system("clear");
	for (i=0; i<10; i++)
	{
	   for(j=0; j<10; j++)
		{ 
		   printf("%c ", tavola[i][j]);
		    if (i==0 && j==9)
		   {			
			printf("\t\tPUNTEGGIO %d", pnt);
		   }
		}
	   printf("\n");
	}
	printf("\n");
}

void svuota(char tavola[10][10])
{
	int i, j;
	for (i=0; i<10; i++)
	{
	   for(j=0; j<10; j++)
		{
		   tavola[i][j]='-';
		}
	   printf("\n");
	}
}
