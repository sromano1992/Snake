#include"mylib.h"

void input(POSITION *testa, char tavola[10][10])
{
	char now;
	int a=0, s=0, d=0, w=0, giro=1, size_snake_standard=0, size_snake=0, i, j;
	if (giro==1)
 	{
  	   fiore(tavola);
	}

	while(1)
	{
	   while(!kbhit())	/*finchè non premi un tasto*/
	   {
		   /*CONTROLLI MANOVRE ERRATE*/
		   if (giro==2)
		   {
			   if(d==1 && now=='a')
			   {
				testa=down(testa, tavola);	/*aggiorna la lista*/
				if(testa->next==NULL)
				{
				  return;
				}
				punt=refreshpnt(0, 0);	/*leggo il punteggio*/
				draw_snake(testa, tavola);	/*aggiorna il serpente*/
				print(tavola, punt);
				d=0;
				a=0;
				s=1;	
				w=0;
				continue;
			   }
			   if(s==1 && now=='w')
			   {
			      testa=destra(testa, tavola);	/*aggiorna la lista*/
			      if(testa->next==NULL)
			      {
				 return;
			      }
			      punt=refreshpnt(0, 0);	/*leggo il punteggio*/
			      draw_snake(testa, tavola);	/*aggiorna il serpente*/
			      print(tavola, punt);
			      d=1;
			      a=0;
			      s=0;	
			      w=0;
			      continue;
			}
			if(a==1 && now=='d')
			{
			   testa=up(testa, tavola);	/*aggiorna la lista*/
			   if(testa->next==NULL)
			   {
		      	     return;
			   }
			   punt=refreshpnt(0, 0);	/*leggo il punteggio*/
			   draw_snake(testa, tavola);	/*aggiorna il serpente*/
			   print(tavola, punt);
		 	   d=0;
			   a=0;
			   s=0;	
			   w=1;
		 	   continue;
			}
			if(w==1 && now=='s')
			{
			   testa=destra(testa, tavola);	/*aggiorna la lista*/
			   if(testa->next==NULL)
			   {
			       return;
			   }
			   punt=refreshpnt(0, 0);	/*leggo il punteggio*/
			   draw_snake(testa, tavola);	/*aggiorna il serpente*/
		  	   print(tavola, punt);
		   	   d=1;
			   a=0;
			   s=0;	
			   w=0;
			   continue;
			}
		   }

		   /*MANOVRE*/
		   if(now=='d')
		   {
			testa=destra(testa, tavola);	/*aggiorna la lista*/
			if(testa->next==NULL)
			{
			   return;
			}
			punt=refreshpnt(0, 0);	/*leggo il punteggio*/
			draw_snake(testa, tavola);	/*aggiorna il serpente*/
			print(tavola, punt);
			d=1;
			a=0;
			s=0;	
			w=0;
		   }
	
		   if(now=='s')
		   {
			testa=down(testa, tavola);	/*aggiorna la lista*/
			if(testa->next==NULL)
			{
			  return;
			}
			punt=refreshpnt(0, 0);	/*leggo il punteggio*/
			draw_snake(testa, tavola);	/*aggiorna il serpente*/
			print(tavola, punt);
			d=0;
			a=0;
			s=1;	
			w=0;
		   }

		   if(now=='a')
		   {
			testa=sinistra(testa, tavola);	/*aggiorna la lista*/
			if(testa->next==NULL)
			{
			  return;
			}
			punt=refreshpnt(0, 0);	/*leggo il punteggio*/
			draw_snake(testa, tavola);	/*aggiorna il serpente*/
			print(tavola, punt);
		 	d=0;
			a=1;
			s=0;	
			w=0;
		   }
	
		   if(now=='w')
		   {
			testa=up(testa, tavola);	/*aggiorna la lista*/
			if(testa->next==NULL)
			{
			  return;
			}
			punt=refreshpnt(0, 0);	/*leggo il punteggio*/
			draw_snake(testa, tavola);	/*aggiorna il serpente*/
			print(tavola, punt);
			d=0;
			a=0;
			s=0;	
			w=1;
		   }
		   giro=2;
		   usleep(100500);
		}
	now=getchar();
	}
   
}
