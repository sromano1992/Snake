#include"mylib.h"

int refreshpnt(int write, int reset)
{
	static int pnt=0;
	if(write==1)
	{
	   pnt+= 6;
	}
	if(reset==1)
	{
	   pnt=0;
	}
	return pnt;
}
