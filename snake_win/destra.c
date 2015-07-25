#include"mylib.h"

POSITION* destra(POSITION* testa, char tavola[10][10])
{
	/*innanzi tutto cambiamo le coordinate del primo elemento della lista*/
	int newx, newy, mangia=0; 
	POSITION *final, *appoggio, *snake_long, *null;
	null=malloc(sizeof(POSITION));
	snake_long=malloc(sizeof(POSITION));
	final=malloc(sizeof(POSITION));
	appoggio=malloc(sizeof(POSITION));
	tavola[testa->y][testa->x]='-';
	final=testa->next;
	appoggio->next=testa->next;
	while(appoggio->next!=NULL)
	{
	   appoggio=appoggio->next;
	}
	newx=appoggio->x +1;	/*prendo le coordinate dell'attuale ultimo*/
	newy=appoggio->y;
	if(tavola[newy][newx]=='*' || newx>9)	/*controllo se snake si morsica*/
	{
	   null->next=NULL;
	   return  null;
	}
	if(tavola[newy][newx]=='F')	/*controllo se allungare snake*/
	{
	   snake_long->y=testa->y;	/*qui testa è ancora il primo elemento di snake*/
	   snake_long->x=testa->x;
	   mangia=1;
	}
	testa->x=newx;	/*le modifico andando verso a destra*/
	testa->y=newy;
	appoggio->next=testa;
	testa->next=NULL;
	if(mangia==0)
	{
	   return final;
	}
	else if(mangia==1)
	{
	   snake_long->next=final;	/*attacco la parte nuova di snake*/
	   fiore(tavola);
	   punt=refreshpnt(1, 0);
	   return snake_long;	
	}
}
