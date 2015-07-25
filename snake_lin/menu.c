#include"mylib.h"
/*funzione che restituisce 1 se bisogna chiudere il programma e 2 se iniziarlo*/
int menu(void)
{
	int select=2;
	char now='w';
	start();
	while(1)
	{
	     if(now=='s')
	      {
		bye();
		select=1;
	      }
	   
	      if(now=='w')
	      {
		start();
		select=2;
	      }
	
	      if(now=='\n' && select==2)
	      {
		return 0;
	      }
  
	      if(now=='\n'&& select==1)
	      {
	   	return 1;
	      }
	   
	      while(!kbhit()){}	
	      now=getchar();
	}
}
