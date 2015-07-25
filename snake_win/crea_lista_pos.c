#include"mylib.h"

POSITION* crea_lista_pos(POSITION *testa)
{
	POSITION *succ;	
	succ=malloc(sizeof(POSITION));
	testa->y=0;
	testa->x=0;
	testa->next=succ;
	succ->y=0;
	succ->x=1;
	succ->next=NULL;
	return testa;
}

