#include"mylib.h"

void draw_snake(POSITION *testa, char tavola[10][10])
{
	
	while(testa!=NULL)
	{
	   tavola[testa->y][testa->x]='*';
	   testa=testa->next;	
	}
}
