#include"mylib.h"
/*stampe speciali menu*/
void start()
{
	system("cls");
	int i, j;
	for (j=0; j<3; j++)
	{
	   for (i=0; i<17; i++)
	   {
		if(j==0)
		{
		   printf("*");
		}
		if(j==1 && i>0 && i<15)
		{
		   printf("*  START  GAME  *");
		   break;
		}
		else if(j==2)
		{
		   printf("*");
		}
	   }
	   printf("\n");
	}

	printf("\n");
	printf("      EXIT      ");
	printf("\n");
}

void bye()
{
	system("cls");
	printf("\n");
	printf("   START  GAME ");
	printf("\n\n");
	int i, j;
	for (j=0; j<3; j++)
	{
	   for (i=0; i<17; i++)
	   {
		if(j==0)
		{
		   printf("*");
		}
		if(j==1 && i>0 && i<15)
		{
		   printf("*     EXIT      *");
		   break;
		}
		else if(j==2)
		{
		   printf("*");
		}
	   }
	   printf("\n");
	}
}


