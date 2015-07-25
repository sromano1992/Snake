#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<time.h>
#include<conio.h>

struct position{
	int y;
	int x;
	struct position *next;
	};

typedef struct position POSITION;

static int punt=0;
void print(char tavola[10][10], int pnt);
void svuota(char tavola[10][10]);
POSITION* crea_lista_pos(POSITION *testa);
void draw_snake(POSITION *testa, char tavola[10][10]);	/*scrive nella tavola gli * al posto giusto*/
void input(POSITION* testa, char tavola[10][10]);
POSITION* destra(POSITION *testa, char tavola[10][10]);
POSITION* down(POSITION* testa, char tavola[10][10]);
POSITION* sinistra(POSITION* testa, char tavola[10][10]);
POSITION* up(POSITION* testa, char tavola[10][10]);
void fiore (char tavola[10][10]);	
int refreshpnt(int write, int reset);	/*se mando write ad 1 aggiorno il punteggio; se mando reset ad 1 lo azzero*/ 
int menu(void);
void start();
void bye();
void gameover (int pnt);
