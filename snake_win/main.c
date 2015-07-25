#include"mylib.h"

int main()
{
	int men, pnt;
	char tavola[10][10];
	POSITION *testa;
	while(1)
	{
	   testa=malloc(sizeof(POSITION));
	   svuota(tavola);
	   testa=crea_lista_pos(testa);
	   draw_snake(testa, tavola);
	   men=menu();
	   if(men==0)
	   {
	      print(tavola, 0);
	      input(testa, tavola);
	      /*se input ritorna significa che hai perso*/
	      pnt=refreshpnt(0, 0);	/*leggo il punteggio*/
	      gameover(pnt);
	      pnt=refreshpnt(0, 1);	/*azzero il punteggio*/
	   }
	   else
	   {
	      system("cls");
          printf("pianobarsimone program\n");
          _sleep(2000);
	      return;
	   }
	}
}
