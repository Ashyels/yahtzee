#ifndef yahtzee_C
#define yahtzee_C

#include "Yahtzee.h"
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <windows.h>

int kocok_dadu()
{	
	return (rand()%6)+1;
}

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void close()
{
	int i;
	for(i=10; i<50; i++)
	{
		gotoxy(0,i);	
		printf("                                     ");
	}
}

void tampil_kategori(int skor, char X[])
{
	gotoxy(0,0);	printf("Kategori:\n");
	printf("Upper Section:			Lower Section:\n");
	printf("1. Aces		(%c)		7. Three of a Kind	(%c)\n", X[0], X[6]);
	printf("2. Twos		(%c)		8. Four of a Kind	(%c)\n", X[1], X[7]);
	printf("3. Threes	(%c)		9. Full House		(%c)\n", X[2], X[8]);
	printf("4. Fours	(%c)		10. Small Straight	{%c}\n", X[3], X[9]);
	printf("5. Fives	(%c)		11. Large Straight	(%c)\n", X[4], X[10]);
	printf("6. Sixes	(%c)		12. Yahtzee		(%c)\n", X[5], X[11]);
	printf("				13. Chance		(%C)\n", X[12]);
	printf("\n");
	printf("Skor = %i", skor);	
}


/*int fungsi_kategorI(int kategori, int dadu[], int *skor)
{
	
	
	return 0;
}
*/
#endif
